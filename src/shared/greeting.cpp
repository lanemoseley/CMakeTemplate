#include "greeting.h"

Greeting::Greeting() {}

std::string Greeting::getGreetingFromFile() {
  std::ifstream greetingFile;
  greetingFile.exceptions(std::ios::failbit); // throw if failbit sets

  try {
    boost::filesystem::path p(SOURCE_DIR);
    p /= "resources/greeting.txt";
    greetingFile.open(p);
    std::string greeting;
    getline(greetingFile, greeting);
    greetingFile.close();
    return greeting;
  } catch (const std::ifstream::failure &e) {
    throw;
  }
}
