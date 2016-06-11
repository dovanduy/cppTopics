#define COMPILE_Building
// Conditional compilation example
#ifdef COMPILE_Building
#include <iostream>
#include <string>
using namespace std;
#endif
/*	Lecture 2, 03-June-2016
Home Work 2, Problem 1
1. Write a class called “Building”.
Write constructors, destructor, attributes and
functions for the class.
*/
#include <sstream>

class Building
{
private:
	string name;
	string owner;
	int floors; // qty
	int offices; // qty
	int employees;
	int seats;
	bool is1stFloorRestaurant;
	inline bool isYes(char c)
	{
		return (c == 'Y' || c == 'y');
	}
	inline string numToString(int number)
	{
		string result;// It is a function result.
					  // stream used for the conversion
		ostringstream convert;
		// insert the textual representation of 'num' in the characters in the stream
		convert << number;
		// set 'result' to the contents of the stream
		result = convert.str();
		return result;
	}
	string toYesNo(bool a) {
		if (a)
			return ("Yes");
		else
			return ("No");
	}
protected:
	inline string readNextLine()
	{
		string res;
		if (std::cin.peek() == '\n') {
			std::cin.ignore(1, '\n');
		}
		getline(std::cin, res, '\n');
		return res;
	}
	string getName();
	string getOwner();
	int getFloors();
	int getOffices();
	int getEmployess();
	int getSeats();
	bool getIs1stFloorRestaurant();
public:
	Building()
	{
		char ch;
		cout << "Name=> "; this->name = this->readNextLine();
		cout << "Owner=> "; this->owner = this->readNextLine();
		cout << "Number of Floors=> "; cin >> floors;
		cout << "Number of Offices=> "; cin >> offices;
		cout << "Number of Employees=> "; std::cin >> employees;
		cout << "Number of Seats=> "; cin >> seats;
		cout << "Is there a first floor restaurant "; cin >> ch;
		this->is1stFloorRestaurant = this->isYes(ch);
	}

	Building(string name, string owner, int floors, int offices, int employees, int seats, bool is1stFloorRestaurant = false)
	{
		this->name = name;
		this->owner = owner;
		this->floors = floors;
		this->offices = offices;
		this->employees = employees;
		this->seats = seats;
		this->is1stFloorRestaurant = is1stFloorRestaurant;
	}

	string getInfo();

	~Building()
	{
		cout << "\nBuilding Destuctor starts.\n";
	}
};

string Building::getName() {
	return this->name;
};

string Building::getOwner()
{
	return this->owner;
};

int Building::getFloors() {
	return this->floors;
};

int Building::getOffices() {
	return this->offices;
};

int Building::getEmployess() {
	return this->employees;
};

int Building::getSeats() {
	return this->seats;
};

bool Building::getIs1stFloorRestaurant() {
	return this->is1stFloorRestaurant;
};

string Building::getInfo() {
	string res;
	res = "Building name: " + name +
		" Owner: " + owner +
		" Floors: " + numToString(floors) +
		"\nOffices: " + numToString(offices) +
		" Employees " + numToString(employees) +
		" Seats " + numToString(seats) +
		" First floor RESTAURANT " + toYesNo(is1stFloorRestaurant);
	return res;
};
