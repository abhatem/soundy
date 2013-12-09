#include <iostream>
#include "soundy.h"
#include "audio.h"
#include "colortracker.h"
int main(int argc, char *argv[])
{
  sColorTracker::Instance()->setLowH(160);
  sColorTracker::Instance()->setHighH(180);
  sColorTracker::Instance()->setLowS(100);
  sColorTracker::Instance()->setHighS(255);
  sColorTracker::Instance()->setLowV(100);
  sColorTracker::Instance()->setHighV(255);
  bool play = true;
  int c = 0;
  cv::Point p;
  cv::imread("shit.jpg");
  sAudio::Instance()->initSound();
  while(true){
    p = sColorTracker::Instance()->ColorPos();
    sAudio::Instance()->playSound(p.y/75, p.y/75);
   
    //Pa_Sleep(20);
    // int c = cv::waitKey(30);
    // std::cout << c << std::endl;
    // if(c==32){
    //   sAudio::Instance()->playSound(0, 0);
    //   play = !play;
    //   std::cout << "altered" << std::endl;
    // }
    //Pa_Sleep(10);
    //std::getline(std::cin, c);
    c = cv::waitKey(33);
    if(c==65) break;
    if(c==27) break;
    std::cout << c << std::endl;
    //if((char)c == 27) break;
  }
  return 0;
}
