#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main(){
	std::cout << "Hello World!" << std::endl;
	std::string path = "/Users/harveybates/Pictures/White_Light_Phenobottle.png";
	cv::Mat img = cv::imread(path);
	cv::imshow("Image", img);
	cv::waitKey(0);
	return 0;
}
