#include <cstring>
#include <fstream>
#include <stdio.h>
#include <string>

void printVersionAndBuildInfo(char *[]);
void printGreetingFromFile();

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printVersionAndBuildInfo(argv);
  } else {
    printGreetingFromFile();
  }

  return 0;
}

void printVersionAndBuildInfo(char *args[]) {
  if (strcmp(args[1], "-v") == 0) {
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
}

void printGreetingFromFile() {
  std::ifstream greetingFile("resources/greeting.txt");
  if (greetingFile.is_open()) {
    std::string greeting;
    getline(greetingFile, greeting);
    printf("%s\n", greeting.c_str());
  } else {
    printf("ERROR: rdstate %d\n", greetingFile.rdstate());
  }
}
