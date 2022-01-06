#include "main.h"


int main() {

	cv::Mat vid;
	cv::VideoCapture cap(0);

	if (!cap.isOpened()) {
		std::cerr << 
			"Unable to open webcamera. Check permissions." 
			<< std::endl;
		return 1;
	}

	cap.set(cv::CAP_PROP_FRAME_WIDTH, 640);
	cap.set(cv::CAP_PROP_FRAME_HEIGHT, 480);

	cap.set(cv::CAP_PROP_CONVERT_RGB, false);


	while (true) {

		cap.set(cv::CAP_PROP_FPS, 10);

		cap >> vid;

		cv::putText(vid,
				"test",
				cv::Point(10, vid.rows / 2),
				cv::FONT_HERSHEY_DUPLEX,
				1.0,
				CV_RGB(118, 185, 0),
				2);

		cv::imshow("Webcam", vid);

		cv::waitKey(25);
		
	}

	return 0;

}
