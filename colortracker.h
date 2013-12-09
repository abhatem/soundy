#include "soundy.h"

class soundy::VP::ColorTracker{
  
public:
  ColorTracker();
  ColorTracker(int lowH, int highH, int lowS, int highS, int lowV, int highV);
  virtual ~ColorTracker();
  cv::Mat imgTracking() {return _imgTracking;}

  // getters
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
  cv::Mat GetThresholdedImage(cv::Mat imgHSV, int lowH, int highH,
			      int lowS, int highS, int lowV,
			      int highV);

  void trackObject(cv::Mat imgThresh);
};
