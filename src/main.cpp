#include "shared/greeting.h"
#include <cstring>
#include <stdio.h>
#include <string>

void printVersionAndBuildInfo();

int main(int argc, char *argv[]) {
  if (argc > 1 && strcmp(argv[1], "-v") == 0) {
    printVersionAndBuildInfo();
  } else {
    Greeting greeting;
    printf("%s\n", greeting.getGreetingFromFile().c_str());
  }

  return 0;
}

void printVersionAndBuildInfo() {
  std::string versionString;
  std::string buildString;

  std::ifstream aboutFile("resources/about.txt");
  std::string aboutLine;
  while (std::getline(aboutFile, aboutLine)) {
    if (aboutLine.find("version=") == 0) {
      versionString = aboutLine.substr(8);
    } else if (aboutLine.find("build=" == 0)) {
      buildString = aboutLine.substr(6);
    }
  }

  printf("Version: %s\n", versionString.c_str());
  printf("Build Date: %s\n", buildString.c_str());
}
