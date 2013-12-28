#include "app.h"

int soundy::app::run()
{
  sColorTracker::Instance()->setLowH(sConfig::Instance()->lowH());
  sColorTracker::Instance()->setHighH(sConfig::Instance()->highH());
  sColorTracker::Instance()->setLowS(sConfig::Instance()->lowS());
  sColorTracker::Instance()->setHighS(sConfig::Instance()->highS());
  sColorTracker::Instance()->setLowV(sConfig::Instance()->lowV());
  sColorTracker::Instance()->setHighV(sConfig::Instance()->highV());
  soundy::GUI::mainWindow mainWin;
  soundy::GUI::configWindow configWin;
  bool play = false;
  cv::Point p;
  sAudio::Instance()->initSound();
  cv::Mat frame_err;
  frame_err = cv::imread("frame_err.png");
  while(true){
    p = sColorTracker::Instance()->ColorPos();
    
    if(play)
      sAudio::Instance()->playSound(p.y/60, p.y/60);

    if(!sColorTracker::Instance()->frame().empty()) {
	mainWin.show(sColorTracker::Instance()->frame(), p.x, p.y);
    } else {
      mainWin.show(frame_err);
    }
    if(sConfig::Instance()->configMode()) configWin.show();
    int c = cv::waitKey(10);
    if ((char)c == 27) break;
    if ((char)c == 32){
      play = !play;
      if(!play) sAudio::Instance()->playSound(0, 0);
      if(DEBUG && play) std::cout << "playing." << std::endl; // if debuging and play is set to true
      if(DEBUG && !play) std::cout << "stop playing." << std::endl; // if debuging and play is set to false11
    }
    if ((char)c == 67 || (char)c == 99){
      sConfig::Instance()->setConfigMode(!sConfig::Instance()->configMode());
    }
  }
  return 0;
}

soundy::app::app()
{
  if(!sConfig::Instance()->readConfig()) {
    cv::namedWindow("error");
    cv::Mat err_img(640, 480, CV_8UC3, cv::Scalar::all(255));
    cv::putText(err_img, "Error reading configuration.",
		cv::Point(240, 180), CV_FONT_HERSHEY_COMPLEX,
		0.6, cv::Scalar::all(0), 1, 8);
    cv::imshow("error", err_img);
  }
  _loadingError = true;
}
  
int main(int argc, char *argv[])
{
  soundy::app application;
  return application.run();
}
