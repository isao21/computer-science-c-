all: AngleCalculator

Angle.o: Angle.cc Angle.h
	g++ -c -Werror Angle.cc

Log.o: Log.cc Log.h
	g++ -c -Werror Log.cc

Fish.o: Fish.cc Fish.h 
	g++ -c -Werror Fish.cc
	
Population.o: Population.cc Population.h
	g++ -c -Werror Population.cc
	
DrunkenFish.o: DrunkenFish.cc DrunkenFish.h
	g++ -c -Werror DrunkenFish.cc
	
main.o: main.cc Angle.h Log.h Fish.h Population.h DrunkenFish.h
	g++ -c -Werror main.cc

AngleCalculator: Angle.o main.o Log.o Fish.o Population.o DrunkenFish.o
	g++ -o AngleCalculator Angle.o main.o Log.o Fish.o Population.o
