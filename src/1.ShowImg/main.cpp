#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat img = cv::imread("../../images/xcw.jpg", -1);
    if(img.empty()) return -1;
    cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
    cv::imshow("Example1", img);
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
