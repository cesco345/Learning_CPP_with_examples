#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function
int main() {
    cv::Mat img ;
    img= cv::imread("./data/lena.jpg");
    cv::namedWindow( "Example1", cv::WINDOW_AUTOSIZE);
    cv::imshow( "Example1", img );
    cv::waitKey( -1 );
    cv::destroyWindow( "Example1" );
    return 0;
}
