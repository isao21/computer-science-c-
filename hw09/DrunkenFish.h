#ifndef DRUNKENFISH_H
#define DRUNKENFISH_H
#include "Fish.h"
class DrunkenFish : public Fish{
	private:
	
	public:
	DrunkenFish(double directionDegree, Population *population) ;
	virtual ~DrunkenFish(); 
	virtual void swim();
};

#endif
