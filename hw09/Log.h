#ifndef LOG_H
#define LOG_H
#include <iostream>
#include <stdio.h>
class Log{

private:
Log();//default constructor if a singleton

public:
static Log& getInstance();//initializes log only if it has not been initlized before otherwise return the isntance of log
virtual ~Log(); //deconsturctor
void print(const std::string& printString); //print statements
};


#endif
