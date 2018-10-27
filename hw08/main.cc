#include <stdio.h>
#include "Angle.h"
#include <iostream>  
#include <fstream>


int main (int argc, char** argv){
Angle a1(30.0);
Angle a2(90);
Angle a3(0);
Log& log = Log::getInstance(); //initializes singleton class.

//regular addition
printf("adding testing \n");
a3 = a1+a2;
printf(" 30 + 90 degrees is %lf degrees expected: 120 degrees \n", a3.getDegree());
//"overlap"
a1.setDegree(360);
a3 = a1+ a2;
printf("360 + 90  degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

//negative number
a2.setDegree(-540);
a3 = a1+ a2;
printf("360 + -540  degrees is %lf degrees  expected: 180 degrees\n", a3.getDegree());

//two negative numbers
a1.setDegree(-90);
a3 = a1+ a2;
printf("-90 + -540  degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

//subtracitng
printf("subtracting now \n");
//regular positiive outcome
a1.setDegree(180);
a2.setDegree(90);
a3 = a1-a2;
printf("180-90  degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

//overlap
a1.setDegree(990);
a2.setDegree(90);
a3 = a1-a2;
printf("990-90 degrees is %lf degrees  expected: 180 degrees\n", a3.getDegree());

//negative outcome
a1.setDegree(-180);
a2.setDegree(90);
a3 = a1-a2;
printf("-180-90  degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

//two negative numbersa1.setDegree(-180);
a2.setDegree(-90);
a3 = a1-a2;
printf("-180- (-90)  degrees is %lf degrees  expected: 270 degrees\n", a3.getDegree());

printf("multiply testing \n");

//regular and it overlaps and positive outcome
a1.setDegree(90);
a2.setDegree(5);
a3 = a1*a2;
printf("90 *5 degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

//negative outcome
a1.setDegree(-90);
a2.setDegree(5);
a3 = a1*a2;
printf("-90 *5 degrees is %lf degrees  expected: 270 degrees\n", a3.getDegree());

//2 negative numbers, with positive out come
a1.setDegree(-90);
a2.setDegree(-5);
a3 = a1*a2;
printf("-90 *-5 degrees is %lf degrees  expected: 90 degrees\n", a3.getDegree());

printf("testing division \n");

//positive outcomea1.setDegree(-90);
a1.setDegree(360);
a2.setDegree(90);
a3 = a1/a2;
printf("360/90 degrees is %lf degrees  expected: 4 degrees\n", a3.getDegree());

//negative  outcomea1.setDegree(-90);
a1.setDegree(-360);
a2.setDegree(90);
a3 = a1/a2;
printf("-360/90 degrees is %lf degrees  expected: 356 degrees\n", a3.getDegree());

//negative  outcomea1.setDegree(-90);
a1.setDegree(-360);
a2.setDegree(-90);
a3 = a1/a2;
printf("-360/-90 degrees is %lf degrees  expected: 4 degrees\n", a3.getDegree());

printf("testing the +=\n");
a1.setDegree(90);
a2.setDegree(90);
a1+=a2;
printf("90 += 90 degrees is %lf expected 180 degrees \n", a1.getDegree());

printf("testing the +=\n");
a1.setDegree(-180);
a2.setDegree(90);
a1+=a2;
printf("-180 += 90 degrees is %lf expected 270 degrees \n", a1.getDegree());

printf("testing the -=\n");
a1.setDegree(180);
a2.setDegree(90);
a1-=a2;
printf("180 -= 90 degrees is %lf expected 90 degrees \n", a1.getDegree());

printf("testing the *=\n");
a1.setDegree(90);
a2.setDegree(6);
a1*=a2;
printf("90 *= 6 degrees is %lf expected 180 degrees \n", a1.getDegree());

printf("testing the /=\n");
a1.setDegree(360);
a2.setDegree(2);
a1/=a2;
printf("360 /= 2 degrees is %lf expected 1 degrees \n", a1.getDegree());

printf("testing the == with 180 ==180\n");
a1.setDegree(180);
a2.setDegree(180);
if(a1 ==a2) printf("two angles are the same\n");
else printf("angles are not the same\n");

printf("testing the == with 90 ==180\n");
a1.setDegree(90);
a2.setDegree(180);
if(a1 ==a2) printf("two angles are the same\n");
else printf("angles are not the same\n");

printf("testing the = with doubles\n");
a1.setDegree(180);
a1 =50;
printf("a1 was formerly 180, and assigned the value of 50. a1 is %lf\n", a1.getDegree());

printf("testing the = with another angle\n");
a1.setDegree(50);
a2.setDegree(180);
a1 =a2;
printf("a1 was formerly 50, and assigned the value of from a2 =180. a1 is %lf\n", a1.getDegree());

std::cout<< a1;
}
