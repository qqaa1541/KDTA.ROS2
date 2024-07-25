#include<iostream>
#include<string>
#include"opencv2/opencv.hpp"

std::string folder = "/home/KDTA.ROS2/opencv/first/";
int main()
{ 
    std::cout << "hello, world" << std::endl;
    cv::Mat img;
    img = cv::imread(folder + "Lenna.png");
    cv::imshow("image", img);
    cv::waitKey(0);
    return 0;
}