/*
	sumAverage2nums.cpp
	Name: ILARIONOV,	Fac. Num. 55331,  11-Aug-2010
--------
   The programm reads two numbers and prints their sum and average.
*/

#include <iostream>

using	namespace std ;

double	average (double num1, double num2) ;

main ()
{
	double	a, b ;
	cout	<< "\nPlease enter two numbers " ;
	cin	    >>a >>b ;
	cout	<<a <<" + " <<b <<" = " <<(a+b) <<'\t' ;
	cout	<<"The average equals to "	<<average(a, b) <<'\n' ;
}

//	Returns the average of two numbers. 
double	average (double num1, double num2)
{
	return (num1+num2)*0.5 ;
}
