/*	Lecture 2, 03-June-2016
	Home Work 2, Problem 1
1. Write a class called “Building”. Write constructors, destructor, attributes and
functions for the class.
*/
#include <iostream>
#include <string>
using namespace std;
#include "Building.h"
int main ()
{
	Building b;
	Building* b1 = new Building ("SoftUni", "SoftUni", 11, 106, 200, 60) ;
	return 0;
}
