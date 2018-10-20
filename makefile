all: AngleCalculator

Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc

main.o: main.cc Angle.h
	g++ -c -Werror main.cc

AngleCalculator: Angle.o main.o 
	g++ -o AngleCalculator Angle.o main.o