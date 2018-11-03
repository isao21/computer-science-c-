#ifndef FISH_H
#define FISH_H
#include "Angle.h"


class Population;

class Fish{
	private:
	Population *population;
	Angle direction;
	
protected:
	int speed;
		int positionX;
	int positionY;
double turnRate;
	
	public:
	Fish(double directionDegree, Population *population); //consturctor
	virtual ~Fish(); //deconstructor
	virtual void swim();

};
#endif