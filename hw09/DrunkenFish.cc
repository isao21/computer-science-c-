#include "DrunkenFish.h"


DrunkenFish::DrunkenFish(double directionDegree, Population *population) : Fish(directionDegree, population){
	
}

DrunkenFish::~DrunkenFish(){
}
void DrunkenFish:: swim(){
	int choice = rand()%4;
	if(choice ==0) positionX += speed;
	else if (choice ==1) positionY+= speed;
	else if(choice ==2) positionX -=speed;
	else 					positionY -=speed;
}