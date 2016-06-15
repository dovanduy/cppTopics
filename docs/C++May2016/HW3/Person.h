#include <iostream>
#include <string>
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
public:
	Person getPerson() ;
	ID setPerson () ;
} ;

Person Persons::getPerson()
{
	return this->_person ;
} ;

ID Persons::setPerson()
{
	return this->_person._ID ;	
}
