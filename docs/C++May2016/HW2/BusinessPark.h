#define COMPILE_BusinessPark
#ifdef COMPILE_BusinessPark
#include <iostream>
#include <string>
using namespace std;
#endif
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
#include "Building.h"
class BusinessPark : public Building
{
private:
	Building* businessPark;
public:
	BusinessPark()
	{
		businessPark = new Building[3] ;
		Building* bp = businessPark;
		bp = new Building("XYZ industries", "XYZ industries", 6, 127, 600, 196, false);
		++bp;
		bp = new Building("Rapid Development Crew", "", 8, 210, 822, 85, true);
		++bp;
		bp = new Building("SoftUni", "SoftUni", 11, 106, 200, 60, false);
	};

	string mostEmpl() ;
	string mostFreePlaces() ;
	string highCoefEmplFreeSeats() ;
	string mostOfficesPerFloor();
	string leastOfficesPerFloor();
	string mostPeoplePerFloor() ;
	string leastPeoplePerFloor() ;
	string mostPeoplePerOffice() ;
	string leastPeoplePerOffice() ;

	~BusinessPark() {
		cout << "\nBusiness Park Destructor";
		delete businessPark;
	}
};

string BusinessPark::mostEmpl() {
	return businessPark[0].getBldgInfo() ;
//	return "ToDo";
};

string BusinessPark::mostFreePlaces() {
	return "ToDo";
};

string BusinessPark::highCoefEmplFreeSeats() {
	return "ToDo";
};

string BusinessPark::mostOfficesPerFloor() {
	return "ToDo";
};

string BusinessPark::leastOfficesPerFloor() {
	return "ToDo";
};

string BusinessPark::mostPeoplePerFloor(){
	return "ToDo";
};

string BusinessPark::leastPeoplePerFloor() {
	return "ToDo";
};

string BusinessPark::mostPeoplePerOffice() {
	return "ToDo";
};

string BusinessPark::leastPeoplePerOffice() {
	return "ToDo";
};

