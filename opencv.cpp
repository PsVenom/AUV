#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace std;
using namespace cv;
Mat orange_mask, green_mask;
int main(){
string path = "/home/psvenom/Downloads/photo.png";
Mat image = imread(path);
Mat imagehsv;
Scalar orange_lower(4,160,160);
Scalar orange_upper(37, 255, 255);
Scalar green_lower(25, 52, 72);
Scalar green_upper(80, 255, 255);
cvtColor(image, imagehsv, COLOR_BGR2HSV);
inRange(imagehsv, orange_lower, orange_upper, orange_mask);
inRange(imagehsv, green_lower, green_upper, green_mask);
imshow("Original", image);
imshow("Image",imagehsv);
imshow("Imageorange", orange_mask);
imshow("Imagreens", green_mask);
waitKey(0);
return 0;
}
