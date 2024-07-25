#include<iostream>
#include"opencv2/opencv.hpp"

using namespace cv;

String folder = "/home/pdy/KDTA.ROS2/opencv/data/";

int main()
{
    // matrix Operation 1 

    Mat img1 = imread (folder + "lena.bmp");
    Rect rc(220, 120, 200, 200);
    Mat img2 = img1(rc);
    Mat img3 = img1(rc).clone();

    img2 = -img2;
    //img1.setTo(Scalar(0, 255, 255));

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);

    waitKey(0);

    return 0;
}