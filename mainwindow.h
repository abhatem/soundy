#ifndef WINDOW_H
#define WINDOW_H

#include "soundy.h"
#include <string>
class soundy::GUI::mainWindow {
 public:
  
  mainWindow();
  virtual ~mainWindow() {cv::destroyAllWindows();}
  
  // getters 
  std::string windowName() const { return _window_name; }
  
  // methods
  void show(cv::Mat frame, int posX, int posY);
  void show(cv::Mat frame);
  
 private:
  // no need for setters for those variables
  const std::string _window_name = "Soundy";
  const std::string _help_txt1 = "Press (ESCAPE) to quit.";
  const std::string _help_txt2 = "(C) for configuring the app";     const std::string _help_txt3 = "(SPACE) for starting/stoping sound";
  
  const int _help_font_face = CV_FONT_HERSHEY_COMPLEX;
  const double _help_font_scale = 0.4;
  const int _help_thickness = 1;
  const cv::Point _help_origin1 = cv::Point(10, 10);
  const cv::Point _help_origin2 = cv::Point(53, 25);
  const cv::Point _help_origin3 = cv::Point(53, 40);
  // 53 so that the keys (Q), (C), (SPACE) fit under each other

};

#endif //WINDOW_H
