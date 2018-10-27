#include "Angle.h"
#include <iostream>
#include <stdio.h>

//constructor
Log::Log(){
}

//deconstructor
Log::~Log(){
}
 /**
only creates a log instance if it is not already initliazed.
**/
Log& Log::getInstance(){
static Log instance;
return instance;
}
/**
prints a string to console
*/
void Log::print(const std::string& printString){
 std::cout <<printString;
}
