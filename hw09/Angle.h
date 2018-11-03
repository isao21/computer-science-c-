#ifndef ANGLE_H
#define ANGLE_H
#include <fstream>
#include <cmath>
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
#endif













