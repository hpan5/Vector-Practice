CC=g++
CXXFLAGS=-g -Wall
SRC= main.o vector.o

main: main.o vector.o
	$(CXX) $(CXXFLAGS) -o main main.o vector.o

main.o: main.cpp vector.h
	$(CXX) $(CXXFLAGS) -c main.cpp

vector.o: vector.h capacity.h modifier.h

clean:
	rm $(SRC) main
