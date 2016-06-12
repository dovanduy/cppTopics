/*	Lecture 2, 03-June-2016
	Home Work 2, Problem 2
	2. Use the class Building, problem 1, in a program where you must define 
business park that consist of 3 buildings.
	The first one is for company called “XYZ industries”, has 6 floors, 127
offices, 600 employees and 196 free working seats.
	The second one is for building called “Rapid Development Crew”, has 8 floors, 210 offices, 822 employees, 85 free
working seats and on the first floor there is a restaurant instead of offices.
	The third building if for “SoftUni”. To fit SoftUni’s needs the build has 11 floors, 106 offices,
200 employees and 60 free working seats.
	Based on that information make a program to print the names of the buildings with:
- Most employees
- Most free places
- Highest coefficient employees/(employees + free seats)
- Most people per floor
- Least people per floor
- Most offices per floor
- Least offices per floor
- Most people per office
- Least people per office
Note: Make three different objects for the three buildings and put them in an array called “businessPark”.
*/
#include <iostream>
#include <string>
#include "Building.h"
using namespace std;

int const PARK_SIZE=3;
Building businessPark[PARK_SIZE];

string mostEmpl() ;
string mostFreePlaces() ;
string highCoefEmplFreeSeats() ;
string mostOfficesPerFloor();
string leastOfficesPerFloor();
string mostPeoplePerFloor() ;
string leastPeoplePerFloor() ;
string mostPeoplePerOffice() ;
string leastPeoplePerOffice() ;

int main()
{
	int i;
	
	Building* b = new Building("Rapid Development Crew", "", 8, 210, 822, 85, true);
	businessPark[1] = *b ;
	b = new Building ("SoftUni", "SoftUni", 11, 106, 200, 60) ; 
	businessPark[0] = *b ; 
	b = new Building("XYZ industries", "XYZ industries", 6, 127, 600, 196);
	businessPark[2] = *b ;
	
	cout <<endl <<"maxEmployess=> " <<mostEmpl() <<endl
		 <<endl <<"mostFreePlaces=> " <<mostFreePlaces() <<endl
		 <<endl <<"highCoefEmplFreeSeats=> " <<highCoefEmplFreeSeats() <<endl
		 <<endl <<"mostOfficesPerFloor=> " <<mostOfficesPerFloor() <<endl
		 <<endl <<"leastOfficesPerFloor=> " <<leastOfficesPerFloor() <<endl
		 <<endl <<"mostPeoplePerFloor=> " <<mostPeoplePerFloor() <<endl
		 <<endl <<"leastPeoplePerFloor=> " <<leastPeoplePerFloor() <<endl
		 <<endl <<"mostPeoplePerOffice=> " <<mostPeoplePerOffice() <<endl
		 <<endl <<"leastPeoplePerOffice=> " <<leastPeoplePerOffice() <<endl
		 ;
	return 0; // The destructor sequence: [2] => [1] => [0]
}

string mostEmpl() {
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() > businessPark[maxInd].getEmployess() )
		maxInd=i; 
	return businessPark[maxInd].getName() ;
};

string mostFreePlaces() {
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getSeats()>businessPark[maxInd].getSeats())
		maxInd=i; 
	return businessPark[maxInd].getName() ;
};

string highCoefEmplFreeSeats() {
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() / ((double)(businessPark[i].getEmployess()+businessPark[i].getSeats())) > 
		businessPark[maxInd].getEmployess() / ((double)(businessPark[maxInd].getEmployess()+businessPark[maxInd].getSeats())))
		maxInd=i; 
	return businessPark[maxInd].getName() ;
};

string mostOfficesPerFloor() {
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getOffices() / ((double)businessPark[i].getFloors()) > 
		businessPark[maxInd].getOffices() / ((double)businessPark[maxInd].getFloors()))
		maxInd=i; 
	return businessPark[maxInd].getName() ;
};

string leastOfficesPerFloor() {
	int minInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getOffices() / ((double)businessPark[i].getFloors()) < 
		businessPark[minInd].getOffices() / ((double)businessPark[minInd].getFloors()))
		minInd=i; 
	return businessPark[minInd].getName() ;
};

string mostPeoplePerFloor(){
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() / ((double)businessPark[i].getFloors() )> 
		businessPark[maxInd].getEmployess() / ((double)businessPark[maxInd].getFloors()))
		maxInd=i;
	return businessPark[maxInd].getName() ;
};

string leastPeoplePerFloor() {
	int minInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() / ((double)businessPark[i].getFloors()) < 
		businessPark[minInd].getEmployess() / ((double)businessPark[minInd].getFloors()))
		minInd=i; 
	return businessPark[minInd].getName() ;
};

string mostPeoplePerOffice() {
	int maxInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() / ((double)businessPark[i].getOffices() )> 
		businessPark[maxInd].getEmployess() / ((double)businessPark[maxInd].getOffices()))
		maxInd=i;
	return businessPark[maxInd].getName() ;
};

string leastPeoplePerOffice() {
	int minInd = 0, i;
	for (i=0 ; i<PARK_SIZE; ++i )
	if (businessPark[i].getEmployess() / ((double)businessPark[i].getOffices()) < 
		businessPark[minInd].getEmployess() / ((double)businessPark[minInd].getOffices()))
		minInd=i; 
	return businessPark[minInd].getName() ;
};

