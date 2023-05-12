#include <fstream>
#include <stdio.h>
#include <string>

int main() {
    std::fstream greetingFile("resources/greeting.txt");
    if (greetingFile.is_open()) {
        std::string greeting;
        getline(greetingFile, greeting);
        printf("%s\n", greeting.c_str());
    } else {
        printf("ERROR: rdstate %d\n", greetingFile.rdstate());
    }

    return 0;
}