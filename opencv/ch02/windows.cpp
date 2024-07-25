#include<iostream>
#include"opencv2/opencv.hpp"

using namespace std;
using namespace cv;
string folder = "/home/KDTA.ROS2/opencv/data";

int main()
{
    Mat img;
    img = imread(folder + "lena.bmp");
    namedWindow("lena");
    imshow("lena", img);
    int key = waitkey(0);
    cout << key << endl;
    //Size size;
    //size.height = (int)100;
    //size.width = 100;
    destroyWindow("lena");
    imshow("lena", img);
    //resizeWindow("lena", size);
    waitkey(0);
    return 0;
}