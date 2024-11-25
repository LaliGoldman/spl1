# Please implement your Makefile rules and targets below.
# Customize this file to define how to build your project.# Makefile for C++ project
# Customize this file to define how to build your project.

# Default target to build, clean, and run everything
all: clean compile

# Compile target to build the C++ executable
compile: main.o
	g++ -o bin/run bin/main.o

main.o:
	g++ -g -I include/ -o bin/main.o -c src/main.cpp

# Settlement.o:
# 	g++ -g -I include/ -o bin/Settlement.o -c src/Settlement.cpp

# Run target to execute the program
run:
	./bin/run

# Clean target to remove the executable
clean: 
	rm -f bin/run bin/*.o