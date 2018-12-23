
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

//bisect the puppy image into two
int main(int argc, char** argv){
	string imageName;
	if(argc > 1){
		imageName = argv[1];
	}
	Mat image;
	image = imread(imageName.c_str(), 1);
	Mat leftHalf = image(Range::all(), Range(2,240));
	Mat rightHalf = image(Range::all(), Range(241, 480));

	namedWindow("left half", WINDOW_AUTOSIZE);
	namedWindow("right half", WINDOW_AUTOSIZE);
	imshow("left half", leftHalf);
	imshow("right half", rightHalf);
	waitKey(0);

	return 0;
}