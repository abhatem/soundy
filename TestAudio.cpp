#include <iostream>
#include "soundy.h"
#include "audio.h"
int main(int argc, char *argv[])
{
  //Pa_Initialize();
  
  sAudio::Instance()->playSound();
  sAudio::Instance()->playSound(2, 2);
  sAudio::Instance()->playSound(3, 3);
    
  // a.playSound();
  // a.playSound(3, 3);
  // Pa_Sleep(1200);
  // a.playSound(2000, 1, 1);
  // Pa_Sleep(2500);
  //Pa_Initialize();
  //std::cout << "All clear " << std::endl;
  
  return 0;
}
