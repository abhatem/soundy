#ifndef COLORTRACKER_H
#define COLORTRACKER_H
#include "soundy.h"

class soundy::VP::ColorTracker{
  
public:
  ColorTracker();
  ColorTracker(int lowH, int highH, int lowS, int highS, int lowV, int highV);
  virtual ~ColorTracker();
  // getters
  cv::Mat imgTracking() {return _imgTracking;}
  cv::Mat frame() {return _pub_frame;}
  cv::Mat imgThresh() {return _pub_imgThresh;}
  int posX() {return _posX;}
  int posY() {return _posY;}
  int lowH() {return _lowH;}
  int lowS() {return _lowS;}
  int lowV() {return _lowV;}
  int highH() {return _highH;}
  int highS() {return _highS;}
  int highV() {return _highV;}
  int error() {return _error;}
  int lastX() {return _lastX;}
  int lastY() {return _lastY;}
  bool desired_res() {return _desired_res;}
  cv::VideoCapture* capture() {return &_capture;}
  cv::Point ColorPos();

  // setters
  void setLowH(int lowH) {_lowH = lowH;}
  void setLowV(int lowV) {_lowV = lowV;}
  void setLowS(int lowS) {_lowS = lowS;}
  
  void setHighH(int highH) {_highH = highH;}
  void setHighS(int highS) {_highS = highS;}
  void setHighV(int highV) {_highV = highV;}
  /* cv::Mat GetThresholdedImage(cv::Mat imgHSV, int H[2], int S[2], */
  /* 			      V[2]); */
  /* void trackObject(cv::Mat imgThresh); */
  
  
private:
  cv::Mat _imgTracking;
  cv::Mat _imgThresh;
  cv::Mat _imgHSV;
  cv::Mat _frame;
  cv::Mat _pub_frame; // the frame returned when frame() is called because returning _frame while it's being processed can crash the program
                      // so it _frame will be deep copied here when it's done
  cv::Mat _pub_imgThresh; // the thresholded image returned when imgThreash is called for the same reason as _pub_frame
  cv::VideoCapture _capture;
  int _lastX;
  int _lastY;
  int _posX;
  int _posY;
  int _lowH;
  int _highH;
  int _lowS;
  int _highS;
  int _lowV;
  int _highV;
  int _error;
  bool _desired_res; // wether the webcam captures frames in the 
                     // desired reselution
  bool _cam_resize_support; // wether the webcam supports capturing f
                            // frames in different reselutions
  cv::Mat GetThresholdedImage(cv::Mat imgHSV, int lowH, int highH,
			      int lowS, int highS, int lowV,
			      int highV);

  void trackObject(cv::Mat imgThresh);
};

#endif // COLORTRACKER_H
