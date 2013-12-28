#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include "soundy.h"
#include <fstream>
class soundy::Config::configuration // this calss is used as a singleton
{
 public:
  configuration();
  
  bool readConfig(); 
  bool writeConfig(); // this funciton will also be called everytime
                      // cp changes
  
  //setters
  void setConfig(configParams cp) {_cp = cp; writeConfig();}
  void setLowH(int lowH) {_cp.lowH = lowH; writeConfig();}
  void setHighH(int highH) {_cp.highH = highH; writeConfig();}
  void setLowS(int lowS) {_cp.lowS = lowS; writeConfig();}
  void setHighS(int highS) {_cp.highS = highS; writeConfig();}
  void setlowV(int lowV) {_cp.lowV = lowV; writeConfig();}
  void setHighV(int highV) {_cp.highV = highV; writeConfig();}
  void setConfigMode(bool b) {_configMode = b;}
  // getters
  configParams* cp() {return &_cp;} // returns a pointer in order to be able to manipulate it in configWindow trackbar
  
  int lowH() {return _cp.lowH;} 
  int highH() {return _cp.highH;}
  int lowS() {return _cp.lowS;}
  int highS() {return _cp.highS;}
  int lowV() {return _cp.lowV;}
  int highV() {return _cp.highV;}
  bool configMode() {return _configMode;}
  
 private:
  configParams _cp;
  std::ifstream configInputStream;
  std::ofstream configOutputStream;
  bool _configMode;
  const std::string configFileName = "config.cfg";

};

#endif //CONFIGURATION_H
