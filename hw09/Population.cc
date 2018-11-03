#include "Population.h"
#include "Fish.h"
//consturctor
Population:: Population(int maxFishes){
	fishes = new Fish*[maxFishes];
	//*fishes = new Fish[maxFishes];
	int index = 0; //points to an empty slot, last fish is index-1
}

//deconstructor
Population:: ~Population(){
}

void Population::add(Fish*  fish){
	fishes[index] = fish;
	index++;
	
}

Fish* Population::getFishInPopulation(int index){
return fishes[index];
}
/**
returns -1 if there is no fish
**/
int Population::getSizeOfPopulation(){
	
	return index-1;
}
void Population::removeFish(Fish *removeFish){
for(int i = 0; i <index; i++){
	//detected removefish in the population
	if(fishes[i] ==removeFish){
		for(;i<index; i++){
			fishes[i]=fishes[i+2]; //moves the fish to the left to fill gap.
		}
	}
}
}