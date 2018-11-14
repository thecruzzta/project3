cmake_minimum_required(VERSION 3.12)
project(project3)

set(CMAKE_CXX_STANDARD 17)

add_executable(project3 main.cpp Pair.cpp Pair.hpp Track.cpp Track.hpp JSONTokenizer.cpp JSONTokenizer.hpp Entity.cpp Entity.hpp JSONParser.cpp JSONParser.hpp JSONToken.cpp JSONToken.hpp Artist.cpp Artist.hpp Album.cpp Album.hpp Entity.hpp Entity.cpp Artists.cpp Artists.hpp)