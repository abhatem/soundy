#include "soundy.h"
#include "colortracker.h"
#include <UnitTest++.h>
#include <iostream>
//#include "singleton.hpp"
int main(int argc, char *argv[])
{
  sColorTracker::Instance()->setLowH(160);
  sColorTracker::Instance()->setLowS(100);
  sColorTracker::Instance()->setLowV(100);

  sColorTracker::Instance()->setHighH(180);
  sColorTracker::Instance()->setHighS(255);
  sColorTracker::Instance()->setHighV(255);
  while (true) {
    std::cout << sColorTracker::Instance()->ColorPos() << std::endl;
    char c = cv::waitKey(10);
    if(c==27) break;
    if(c=='q') break;
  }
  return 0;
}

