
CXX = g++

TARGET = LaneEmden

SRCS = $(wildcard *.cpp)

VERSION=c++11

all:
	$(CXX) -o $(TARGET) $(SRCS) -std=$(VERSION)

clean:
	rm -f $(TARGET)