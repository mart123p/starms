cmake_minimum_required(VERSION 3.5)
project(starms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Personnage.cpp Personnage.h ChevalierJedi.cpp ChevalierJedi.h Attaque.cpp Attaque.h Commando.cpp Commando.h SorcierSith.cpp SorcierSith.h SithAssassin.cpp SithAssassin.h)
add_executable(starms ${SOURCE_FILES})