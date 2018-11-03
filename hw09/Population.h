#ifndef POPULATION_H
#define POPULATION_H
#include "Fish.h"
class Population{
	private:
	Fish** fishes;
	int index;
	public: 
	
	void add(Fish*  fish);
	Fish* getFishInPopulation(int index);
	void removeFish(Fish *removeFish);
	int getSizeOfPopulation();
	Population(int maxFishes);
	virtual ~Population();
	
	
};
#endif