#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <iostream>

int main(){
	cv::Mat frame;
	cv::VideoCapture cap;
	if(!cap.open(0)){
		return 1;
	}
	while(true){
		cap >> frame;
		if(frame.empty()){
			break;
		}
		cv::imshow("Webcam", frame);
		if(cv::waitKey(1) == 27){
			break; // ESC to end
		}
	}
	return 0;
}
