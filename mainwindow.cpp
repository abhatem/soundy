#include "mainwindow.h"

using namespace cv;

soundy::GUI::mainWindow::mainWindow() {
  namedWindow(_window_name);
}

void soundy::GUI::mainWindow::show(cv::Mat frame, int posX, int posY)
{
  rectangle(frame, Point(posX+25, posY+25), Point(posX-25, posY-25),
	    Scalar(255, 255, 0));
  for(int i=1; i < 8; i++) {
    line(frame, Point(40, PITCH_ZONE_HEIGHT*i),
	 Point(VIDEO_FRAME_WIDTH-40, PITCH_ZONE_HEIGHT*i),
	 Scalar(0,255,255), 4);
  }
  putText(frame, _help_txt1, _help_origin1, _help_font_face,
	  _help_font_scale, Scalar::all(0), _help_thickness, 8);
  putText(frame, _help_txt2, _help_origin2, _help_font_face,
	  _help_font_scale, Scalar::all(0), _help_thickness, 8);
  putText(frame, _help_txt3, _help_origin3, _help_font_face,
	  _help_font_scale, Scalar::all(0), _help_thickness, 8);
  
  
  imshow(_window_name, frame);
}

void soundy::GUI::mainWindow::show(cv::Mat frame) {
  imshow(_window_name, frame);
}











