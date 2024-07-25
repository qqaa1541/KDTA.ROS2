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
    while (waitkey(0) != -1)
    {
        // int key = waitkey(0);
        cout << "aaa" << endl;
        moveWindow("lena", 50, 0);
    }
    return 0;
}