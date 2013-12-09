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
  paData data() {return _data;}
  PaStreamParameters outputParameters() { return _outputParameters; }
  PaStream* stream() { return _stream; }
  PaError err() { return _err; }
  
  // setters
  void setData(paData data) { _data = data; }
  void setOutputParameters(PaStreamParameters outputParameters)
  { _outputParameters = outputParameters; }
  
  void setStream(PaStream *stream) { _stream = stream; }
 private:
  void reportError();
  paData _data;
  PaStreamParameters _outputParameters;
  PaStream *_stream;
  PaError _err;
};
