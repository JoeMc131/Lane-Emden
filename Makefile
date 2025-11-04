
CXX = g++

TARGET = LaneEmden

TARGET_DEL = LaneEmden.exe

SRCS = ODE_solver.cpp Physics.cpp Polytrope.cpp Star.cpp

all:
	g++ -o polytrope $(SRCS) -std=c++11