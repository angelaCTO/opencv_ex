/** Example 2-1. A simple OpenCV program that loads an image from disk and 
 *  displays it on the screen
 */
 
#include “highgui.h”

int main( int argc, char** argv ) {
  IplImage* img = cvLoadImage( argv[1] );
  cvNamedWindow( “Example1”, CV_WINDOW_AUTOSIZE );
  cvShowImage( “Example1”, img );
  cvWaitKey(0);
  cvReleaseImage( &img );
  cvDestroyWindow( “Example1” );
}
