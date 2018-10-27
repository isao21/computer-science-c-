all: AngleCalculator

Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc

main.o: main.cc Angle.h
	g++ -c -Werror main.cc

Log.o: Log.cc Angle.h
	g++ -c -Werror Log.cc

Fish.o: Fish.cc Angle.h
	g++ -c -Werror Fish.cc
	
Population.o: Population.cc Angle.h
	g++ -c -Werror Population.cc

AngleCalculator: Angle.o main.o Log.o Fish.o Population.o
	g++ -o AngleCalculator Angle.o main.o Log.o Fish.o Population.o
