/** Example 2-1. A simple OpenCV program that loads an image from disk and 
 *  displays it on the screen
 */
 
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>

int main( int argc, char** argv ) {
  IplImage* img = cvLoadImage( argv[1] );
  cvNamedWindow( "Example1", CV_WINDOW_AUTOSIZE );
  cvShowImage( "Example1", img );
  cvWaitKey(0);
  cvReleaseImage( &img );
  cvDestroyWindow( "Example1" );
}
