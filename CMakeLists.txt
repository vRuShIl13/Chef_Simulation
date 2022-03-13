cmake_minimum_required(VERSION 3.20)
project(Chef_Simulation)

set(CMAKE_CXX_STANDARD 11)

add_executable(Chef_Simulation main.cpp ReadFile.cpp ReadFile.h FoodOrder.cpp FoodOrder.h WaitStack.cpp WaitStack.h WaitType.cpp WaitType.h Node.cpp Node.h EventList.cpp EventList.h EventNode.cpp EventNode.h Event.cpp Event.h Arrival.cpp Arrival.h BasePriceandTime.cpp BasePriceandTime.h)
