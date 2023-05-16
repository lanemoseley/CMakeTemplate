#ifndef _GREETING_H_
#define _GREETING_H_

#include "config.h"
#include <boost/filesystem.hpp>
#include <fstream>

class Greeting {

public:
  Greeting();
  std::string getGreetingFromFile();
};

#endif