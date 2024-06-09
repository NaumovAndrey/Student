#pragma once

#include "../include/Counter.h"
#include "../include/main.h"
#include "string"
#include <iostream>

class Student
{
private:
	string name;
	string surname;
	Counter counter;
	string average;
public:
	string getName();
	string getSurname();
	Counter getCount();
	string getAverage();
};

