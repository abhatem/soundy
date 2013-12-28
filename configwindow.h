#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H

#include "soundy.h"
#include "colortracker.h"
#include "configuration.h"
#include <string>

class soundy::GUI::configWindow {
 public:
  configWindow() {} // unlike in mainWindow the namedWindow is called 
                    // in show() and the constructor does nothing 
                    // this is because we might want to declare an 
                    // instance of configWindow but not show it
  ~configWindow() {}
  
  // getters
  std::string window_name() const {return _window_name;}
  // methods
  void show();
 private:
  const std::string _window_name = "Configuration";
  const std::string _trackbar_lowH = "Lowest Hue";
  const std::string _trackbar_highH = "Highest Hue";
  const std::string _trackbar_lowV = "Lowest Value";
  const std::string _trackbar_highV = "Highest Value";
  const std::string _trackbar_lowS = "Lowest Saturation";
  const std::string _trackbar_highS = "Highest Saturation";
  
  //void confgWindowSettings();
  /* void lowHueCallback(int, void*); */
  /* void highHueCallback(int, void*); */
  /* void lowSaturationCallback(int, void*); */
  /* void highSaturationCallback(int, void*); */
  /* void lowValueCallback(int, void*); */
  /* void highValueCallback(int, void*); */
};

#endif //CONFIGWINDOW_H






