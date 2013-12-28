#include "configwindow.h"

using namespace cv;
using namespace soundy::Config;
//void soundy::GUI::configWindow::configWindow()

void lowHueCallback(int, void*);
void highHueCallback(int, void*);
void lowSaturationCallback(int, void*);
void highSaturationCallback(int, void*);
void lowValueCallback(int, void*);
void highValueCallback(int, void*);

void soundy::GUI::configWindow::show()
{
  namedWindow(_window_name);
  
  createTrackbar(_trackbar_lowH, _window_name, &sConfig::Instance()->cp()->lowH, MAX_HUE,
		 lowHueCallback);
  createTrackbar(_trackbar_highH, _window_name, &sConfig::Instance()->cp()->highH, MAX_HUE,
		 highHueCallback);
  
  createTrackbar(_trackbar_lowS, _window_name, &sConfig::Instance()->cp()->lowS,
		 MAX_SATURATION, lowSaturationCallback);
  createTrackbar(_trackbar_highS, _window_name, &sConfig::Instance()->cp()->highS,
		 MAX_SATURATION, highSaturationCallback);

  createTrackbar(_trackbar_lowV, _window_name, &sConfig::Instance()->cp()->lowV,
		 MAX_VALUE, lowValueCallback);
  createTrackbar(_trackbar_highV, _window_name, &sConfig::Instance()->cp()->highV,
		 MAX_VALUE, highValueCallback);
  //while (true) {
  //while(true) {
  imshow(_window_name, sColorTracker::Instance()->imgThresh());
  //cv::waitKey(50);
  // }
    //}

}

void lowHueCallback(int, void*)
{
  sColorTracker::Instance()->setLowH(sConfig::Instance()->lowH());
  sConfig::Instance()->writeConfig();
}

void highHueCallback(int, void*)
{
  sColorTracker::Instance()->setHighH(sConfig::Instance()->highH());
  sConfig::Instance()->writeConfig();
}

void lowSaturationCallback(int, void*)
{
  sColorTracker::Instance()->setLowS(sConfig::Instance()->lowS());
  sConfig::Instance()->writeConfig();
}

void highSaturationCallback(int, void*)
{
  sColorTracker::Instance()->setHighS(sConfig::Instance()->highS());
  sConfig::Instance()->writeConfig();
}

void lowValueCallback(int, void*)
{
  sColorTracker::Instance()->setLowV(sConfig::Instance()->lowV());
  sConfig::Instance()->writeConfig();
}

void highValueCallback(int, void*)
{
  sColorTracker::Instance()->setHighV(sConfig::Instance()->highV());
  sConfig::Instance()->writeConfig();
}










