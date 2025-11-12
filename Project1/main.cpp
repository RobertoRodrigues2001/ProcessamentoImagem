#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {

	Mat im = imread("kidney.png");

	if(im.empty()){
		cout << "Could not open or find the image";
		return 0;
	}


	imshow("Kidney", im);
	
	cout << "rows" << im.rows << endl;
	cout << "cols" << im.cols << endl;
	waitKey(0);

	return 0;
}