#ifndef SOUNDY_H
#define SOUNDY_H

#include <opencv2/opencv.hpp>
#include <portaudio.h>
#include <cmath>
#include "config.h"


namespace soundy {
  template<class T> class Singleton;
  class app;
  namespace VP {
    // class for computer vision pertaining to color tracknig
    class ColorTracker;
  }

  namespace Sound {
    // class for handling audio output
    class audio;
    
    // the struct that is going to be passed to the callback responsible for audio output
    typedef struct 
    {
      float sine[TABLE_SIZE];
      int left_phase;
      int right_phase;
      int left_inc; 
      int right_inc;
    } paData;
  }
  
  namespace GUI {
    // class responsible for handling the main window
    class mainWindow;
    // class responsible for handling the config window
    class configWindow;
  }
  
  namespace Config {
    typedef struct
    {
      int lowH;
      int highH;
      int lowS;
      int highS;
      int lowV;
      int highV;
    } configParams;
    /* configParams cp; */
    /* bool readConfig(); */
    /* bool writeConfig(int lowH, int highH, int lowS, int highS, */
    /* 		   int lowV, int highV); */
    /* void setConfig(int lowH, int highH, int lowS, int highS, */
    /* 		   int lowV, int highV); */

    class configuration;
  }
}

#include "singleton.hpp"
typedef soundy::Singleton<soundy::VP::ColorTracker> sColorTracker;
typedef soundy::Singleton<soundy::Sound::audio> sAudio;
typedef soundy::Singleton<soundy::Config::configuration> sConfig;
//typedef soundy::Singleton<soundy::app> sapp; // cool name though!!!
#endif //SOUNDY_H
