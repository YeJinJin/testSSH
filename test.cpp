#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;  
  
int main(int argc, char* argv[])  
{  
    const char* imagename = "174522.jpg";
    Mat image;  
    image = imread(imagename);  
  
    if (image.empty())   
    {  
    
        return -1;  
    }  
    namedWindow("Display Image", CV_WINDOW_AUTOSIZE);  
    imshow("Display Image", image);  
    waitKey(0);  
    return 0;  
}

