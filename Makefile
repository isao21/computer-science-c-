all: main

main.o: main.cc
	g++ -c -Werror main.cc
	
main: main.o
	g++ -o PpmCopier main.o