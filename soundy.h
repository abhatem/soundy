#ifndef SOUNDY_H
#define SOUNDY_H

#include <opencv2/opencv.hpp>
#include <portaudio.h>
#include <cmath>
#include "config.h"

namespace soundy {

  template<class T> class Singleton;
  
  namespace VP {
    class ColorTracker;
  }

  namespace Sound {
    class audio;
  }
}


typedef struct 
{
  float sine[TABLE_SIZE];
  int left_phase;
  int right_phase;
  int left_inc;
  int right_inc;
} paData;

#include "singleton.hpp"
typedef soundy::Singleton<soundy::VP::ColorTracker> sColorTracker;
typedef soundy::Singleton<soundy::Sound::audio> sAudio;
#endif //SOUNDY_h
