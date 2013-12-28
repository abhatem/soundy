#include "configuration.h"

#include "soundy.h"

//soundy::Config::configParams soundy::Config::configParams::cp;

soundy::Config::configuration::configuration() : _configMode(false)
{
  if(!readConfig()) {
    if(DEBUG) std::cout << "Error reading configuration." << std::endl;
  }
}

bool soundy::Config::configuration::readConfig()
{
  std::string line;
  configInputStream.open(configFileName);
  if(configInputStream.is_open()) {
    for(int i=0; i < TOTAL_CONFIG_LINES; i++) {
      std::getline(configInputStream, line);
      if(i == LOW_H_LINE) _cp.lowH = atoi(line.c_str());
      if(i == HIGH_H_LINE) _cp.highH = atoi(line.c_str());
      if(i == LOW_S_LINE) _cp.lowS = atoi(line.c_str());
      if(i == HIGH_S_LINE) _cp.highS = atoi(line.c_str());
      if(i == LOW_V_LINE) _cp.lowV = atoi(line.c_str());
      if(i == HIGH_V_LINE) _cp.highV = atoi(line.c_str());
    }
    configInputStream.close();
  } else { // that means there is no config file
    configOutputStream.open(configFileName);
    if(configOutputStream.is_open()) {
      configOutputStream << "0\n"; // lowH
      configOutputStream << "180\n"; // highH
      configOutputStream << "0\n"; // lowS
      configOutputStream << "255\n"; // highS
      configOutputStream << "0\n"; //lowV
      configOutputStream << "255\n"; // highV
      configOutputStream.close();
    } else { // that means I can't open the config file
      if(DEBUG) std::cout << "Unable to open configuration."
			  << std::endl;
      return false;
    }
  }
  return true;
}

bool soundy::Config::configuration::writeConfig()
{
  configOutputStream.open(configFileName, std::fstream::trunc);
  if(configOutputStream.is_open()){
    configOutputStream << _cp.lowH << "\n";
    configOutputStream << _cp.highH << "\n";
    configOutputStream << _cp.lowS << "\n";
    configOutputStream << _cp.highS << "\n";
    configOutputStream << _cp.lowV << "\n";
    configOutputStream << _cp.highV << "\n";
    configOutputStream.close();
  } else {
    std::cout << "Unable to open configuration for output."
	      << std::endl;
    return false;
  }

  return true;
}

// void soundy::Config::setConfig(int lowH, int highH, int lowS,
// 			       int highS, int lowV, int highV)
// {
//   cp.lowH = lowH;
//   cp.highH = highH;
//   cp.lowS = lowS;
//   cp.highS = highS;
//   cp.lowV = lowV;
//   cp.highV = highV;
// }

