// main.cpp: 定义应用程序的入口点。

#include "opencv2/highgui/highgui.hpp"

int main()
{
	cv::Mat img = cv::imread("C:\\Users\\南九的橘猫\\Desktop\\OpenCV\\src\\1.ShowImg\\img\\xcw.jpg", -1);
	if (img.empty()) return -1;
	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example1", img);
	cv::waitKey(0);
	cv::destroyWindow("Example1");
	return 0;
}
