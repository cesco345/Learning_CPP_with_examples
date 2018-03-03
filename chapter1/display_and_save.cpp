#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
  
using namespace cv;
using namespace std;
 
int main( int argc, char** argv )
{
 Mat image1,image2;
 
// Read image
image1 = imread("images.png",CV_LOAD_IMAGE_COLOR);
// validate input
 if(! image1.data )                              
    {
        cout << "Could not find image" << std::endl ;
        return -1;
    } 
 
//Save image
imwrite( "copy_images.png",image1);
 
 namedWindow("Image1");
 imshow("Image1",image1);
 waitKey(0);
 
}
