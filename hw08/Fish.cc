#include "Angle.h"
#include <cstdlib>

//constructor
Fish::Fish(double directionDegree, Population *population)  :  direction(directionDegree) {
	positionX = 0;
	positionY = 0;
	turnRate = 90; 
	this->population = population;
	population.add(&population);
//	this->&population.add(this);
}

//deconsturctor
Fish::~Fish(){
	population.remove(&population);
}

//method modifies class cannot be const
void Fish::swim(){
int choice = rand() % 3;
if(choice == 0) direction -= turnRate;
else if(choice == 2) direction += turnRate;
positionX+= speed * direction.getCos();
positionY += speed * direction.getSin();


}