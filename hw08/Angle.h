#ifndef ANGLE_H
#define ANGLE_H
#include <fstream>
class Angle{

private: //mutable excepmpted from const
 double degree;
 double calculateDegree(double thetha) const;
mutable bool calcCos;
mutable bool calcSin;
mutable double cosValue;
 mutable double sinValue;

public:
Angle (double degree); //constructor
Angle(); //default constructor
virtual ~Angle(); //deconstructor
void setDegree(double degree); //set a specific angle
double getDegree() const; //gets the angle from the angle class
double getSin() const;
double getCos() const;
Angle operator+(const Angle& angle) const; //addition overload
Angle operator-(const Angle& angle) const ;//subtraction overload


Angle operator*(const Angle& angle) const ;//multiply overload
Angle operator/(const Angle& angle) const ; //divide overload
void operator+=(const Angle& angle) ; //plus equal overload
void operator-=(const Angle& angle) ; //minus euqal overload
void operator*=(const Angle& angle) ; //multiply equal overlaod
void operator/=(const Angle& angle) ; //divide equal overload
bool operator==(const Angle& angle) const; //compare two overload
void operator=(const Angle& angle); //assignment operator overload
void operator=(double thetha); 

 friend std::ostream& operator<<(std::ostream& out, const Angle& a);
};
//std::ostream& operator<<(std::ostream& out, const Angle& a);

class Log{

private:
Log();//default constructor if a singleton

public:
static Log& getInstance();//initializes log only if it has not been initlized before otherwise return the isntance of log
virtual ~Log(); //deconsturctor
void print(const std::string& printString); //print statements
};
class Population;
class Fish{
	private:
	Population *population;
	int positionX;
	int positionY;
	int speed;
	Angle direction;
	double turnRate;

	
	public:
	Fish(double directionDegree, Population *population); //consturctor
	virtual ~Fish(); //deconstructor
	void swim();
};

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













