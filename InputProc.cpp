#include<opencv2/core/core.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/opencv.hpp>
#include<vector>

using namespace cv;

class InputProc
{
public:

    static Mat dft2cyj(Mat img);
};
Mat InputProc::dft2cyj(Mat img){
        // int m = getOptimalDFTSize(img.rows);
        // int n = getOptimalDFTSize(img.cols);
    
        // Mat padded;
        // copyMakeBorder(img,padded,0,m - img.rows,0,n - img.cols, BORDER_CONSTANT, Scalar::all(0));
    cv::Mat planes[] = {cv::Mat_<float>(img), cv::Mat::zeros(img.size(), CV_32F)};
    cv::Mat complexI;
    cv::merge(planes, 2, complexI);
    cv::dft(complexI, complexI);
    split(complexI, planes);//planes[0] = Re(DFT(I)), planes[1] = Im(DFT(I))
    magnitude(planes[0], planes[1], planes[0]);
    phase(planes[0], planes[1], planes[1]);
        
    cv::Mat FourierSpec;
    cv::merge(planes, 2, FourierSpec);
        
    return FourierSpec;
}