
CXX = g++

TARGET = LaneEmden

TARGET_DEL = LaneEmden.exe

SRCS = ODE_solver.cpp Physics.cpp Polytrope.cpp 

all:
	g++ -o polytrope.exe $(SRCS) -std=c++11