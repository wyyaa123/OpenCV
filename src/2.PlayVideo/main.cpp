// 2.PlayVideo.cpp: 定义应用程序的入口点。
//
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

int main()
{
	cv::namedWindow("Example2", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture cap;
	cap.open("C:\\Users\\username\\Desktop\\OpenCV\\videos\\video1.mp4");
	cv::Mat frame;
	for (;;) {
		cap >> frame;
		if (frame.empty()) break;
		cv::imshow("Example2", frame);
		if (cv::waitKey(30) >= 0) break;
	}
	return 0;
}
