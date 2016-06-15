#include <iostream>
#include <string>
#include <fstream>
using namespace std ;

typedef unsigned int ID;

struct Person
{
	ID _ID;
	string _name ;
} ;

class Persons
{
protected:
	Person _person ;

	bool isFileExist(const char* fileName)
	{	bool res;
    	std::ifstream infile(fileName);
    	res = infile.good() ;
    	infile.close() ;
    	return res;	}
    
public:
	Persons ()
	{
		if (! isFileExist("persons.dat"))
		{
			// creaty an empty file and close it immediately.
		}
		else
		{ // to init a map from a file
		}
	}
	Person getPerson(ID id) ;
	ID setNewPerson () ; // ONE Person only to be added to a map, maybe a file.dat
	~Persons()
	{ // to write a map into file.dat and to clos(file.dat)
	}
} ;

Person Persons::getPerson(ID id)
{
	return this->_person ;
} ;

ID Persons::setNewPerson()
{
	return this->_person._ID ;	
}
