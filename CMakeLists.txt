cmake_minimum_required(VERSION 3.22.1)

project(LearningCMake VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

string(TIMESTAMP BUILD_DATE "%Y%m%d")
string(TIMESTAMP BUILD_TIME "%H%M%S")

configure_file(configure/about.txt resources/about.txt)

add_executable(
    LearningCMake
    main.cpp
)

# After build, copy the resources directory
add_custom_command(
    TARGET LearningCMake POST_BUILD
    COMMAND $(CMAKE_COMMAND) -E copy_directory
        $(CMAKE_SOURCE_DIR)/resources $<TARGET_FILE_DIR:LearningCMake>/resources
)
