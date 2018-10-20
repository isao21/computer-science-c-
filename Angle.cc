#include "Angle.h"
#include <stdio.h>

//variable angle is declared in header Angle.h

/**
default constructor
sets degree to zero
**/
Angle::Angle(){
	degree = 0;
} 
/**
deconstructyor
**/
Angle::~Angle(){
}
/**
double degree: set a default angle.
**/
Angle::Angle(double degree){
this->degree = degree;
}

/**
sets a specific angle
**/
void Angle::setDegree(double degree){
this->degree = degree;
}

/**
gets a specific angle
**/
double Angle::getDegree() const{
return degree;
}
/**
ca
**/
double Angle::calculateDegree(double thetha) const{
	if (thetha <= 360 && thetha >=0) return thetha;

//negative number
else if (thetha <0){ 
	while(thetha <0){
	thetha +=360;
	}
}
//if it is greater than 360
else{
while(thetha >360){
thetha -= 360;
//printf("ran %lf", thetha);
}//end while
}//end else
	return thetha;
}
/**
operator overloading with addition 
**/
Angle Angle::operator+(const Angle& angle) const{
//double angleAfterOperation = calculateDegree(degree + angle.getDegree());
return Angle(calculateDegree(degree + angle.getDegree()));
}
/**
subtractin overloading, subtracts in terms of angles.
**/
Angle Angle::operator-(const Angle& angle) const{
//double angleAfterOperation = degree - angle.getDegree();
return Angle(calculateDegree(degree - angle.getDegree()));
}//end operator- method

//overloading the multiply operation
Angle Angle::operator*(const Angle& angle) const{
	//double angleAfterOperation = degree * angle.getDegree();
	return Angle(calculateDegree(degree * angle.getDegree()));
}

//overloading the division operator
Angle Angle::operator/(const Angle& angle) const{
	return Angle(calculateDegree(degree / angle.getDegree()));
}

//overloading the += operation
void Angle::operator+=(const Angle& angle) {
	degree = calculateDegree(degree+angle.getDegree());
}

//overloading the -= operation
void Angle::operator-=(const Angle& angle) {
	degree = calculateDegree(degree-angle.getDegree());
}

//overloading the *= operation
void Angle::operator*=(const Angle& angle) {
	degree = calculateDegree(degree*angle.getDegree());
}

//overloading the /= operation
void Angle::operator/=(const Angle& angle) {
	degree = calculateDegree(degree/angle.getDegree());
}
/**
true: if both angles degrees are the same 
false: if both angles degrees are not the same
**/
bool Angle::operator==(const Angle& angle)  const{
	if (degree == angle.getDegree()) return true; 
	else return false;
}

//assigns an angle to another angle
void Angle::operator=(const Angle& angle) {
degree = angle.getDegree();
}

//assigns an angle to a double. 
void Angle::operator=(double thetha) {
degree = thetha;
}

 std::ostream& operator<<(std::ostream& out, const Angle& a){
 out << "angle is "<<a.getDegree() <<" degrees\n";
 return out;
 }



