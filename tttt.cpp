#include<opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(){
    Mat srcimg = imread("22.jpg");
    imshow("img", srcimg);
    waitKey(0);
    return 0;
}