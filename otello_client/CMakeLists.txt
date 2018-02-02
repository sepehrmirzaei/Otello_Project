cmake_minimum_required(VERSION 3.6)
project(otello_client)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_PREFIX_PATH /home/sepehr007/Desktop/QT5.8/5.8/gcc_64/)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui Network Multimedia)

set(SOURCE_FILES main.cpp HeaderFiles/otelloboard.h SourceFiles/otelloboard.cpp HeaderFiles/loginmenu.h SourceFiles/loginmenu.cpp HeaderFiles/judgement.h SourceFiles/judgement.cpp SourceFiles/AI.cpp HeaderFiles/AI.h SourceFiles/base.cpp HeaderFiles/base.h)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${CMAKE_PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Network Qt5::Multimedia)