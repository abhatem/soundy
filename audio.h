#ifndef AUDIO_H
#define AUDIO_H

#include "soundy.h"

class soundy::Sound::audio {
 public:
  audio();
  //audio();
  ~audio();

  // methods
  void playSound(int right_inc=1, int left_inc=1);
  void stopSound();
  void initSound();
  // getters
  paData data() const {return _data;}
  PaStreamParameters outputParameters() const { return _outputParameters; }
  PaStream* stream() const { return _stream; }
  PaError err() const { return _err; }
  
  // setters
  void setData(paData data) { _data = data; }
  void setOutputParameters(PaStreamParameters outputParameters)
  { _outputParameters = outputParameters; }
  
  void setStream(PaStream *stream) { _stream = stream; }
  
  //static int left_increment;
  //static int right_increment;
  
 private:
  void reportError();
  soundy::Sound::paData _data;
  PaStreamParameters _outputParameters;
  PaStream *_stream;
  PaError _err;
};

#endif // AUDIO_H
