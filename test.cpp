#include<opencv2/opencv.hpp>
#include<iostream>
#include "codetoseq.cpp"
#include "InputProc.cpp"
#include<opencv2/highgui/highgui.hpp>
#include<vector>
#include<cstring>
using namespace cv;
using namespace std;
// void PrintVec2(vector<vector<int> > a){
//     for(auto& rowV : a){
//         for(auto& el : rowV){
//             cout << el << " ";
//         }
//         cout << ";"<<endl;
//     }
//     cout << endl;
// } 

int main(){
    //  vector<vector<int> > t;
    // t = codetoseq::seqmat(1234567);
    //  PrintVec2(t);
    Mat srcimg = imread("lena512color.tiff");
    imshow("ori",srcimg);
    // vector<cv::Mat> channels;
    // cv::Mat imageBlueChannel;
    // Mat imageGreenChannel;
    // cv::Mat imageRedChannel;
    // cv::split(srcimg, channels);
    // imageBlueChannel = channels.at(0);
    // imageGreenChannel = channels.at(1);
    // imageRedChannel = channels.at(2);
    // cv::Mat fftMat;
    // fftMat  =  InputProc::dft2cyj(imageBlueChannel);
    // vector<cv::Mat> fftChannels;
    // cv::Mat mag;
    // cv::Mat pha;
    // cv::split(fftMat, fftChannels);
    // mag = fftChannels.at(0);
    // cv::normalize(mag, mag, 0, 1, NORM_MINMAX);
    // namedWindow("MAG");
    // cv::imshow("MAG", mag);
    // imwrite("MagWithoutShift.jpg", mag);
    waitKey(0);
    //system("pause");
    return 0;
}

