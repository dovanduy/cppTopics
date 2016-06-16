#include <iostream>
#include <string>
#include <fstream>
#include <map>
#define FILEPERSONS "persons.dat"
#define TESTPERSONS
using namespace std ;

typedef unsigned int ID;

struct Person
{
	string _name ;
	ID _ID;
} ;

class Persons
{
protected:
	Person _person ;
	ID _lastID ;
	map<ID, string> myPersons ;

	bool isFileExist(const char* fileName)
	{	bool res;
    	std::ifstream infile(fileName);
    	res = infile.good() ;
    	infile.close() ;
    	return res;	}
    
public:
	Persons ()
	{
		if (! isFileExist(FILEPERSONS))
		{
			// creaty an empty file and close it immediately.
			_lastID=0 ;
			fstream of (FILEPERSONS, fstream::trunc | fstream::out);
#ifdef TESTPERSONS
			cout <<"\n" <<FILEPERSONS <<" created\n"
			<<(int)_lastID <<endl;
#endif
			of <<_lastID ;
			of.close();
		}
		else
		{ // to INIT a MAP from a FILE
#ifdef TESTPERSONS
			cout <<"\n" <<FILEPERSONS <<" exists already.\n";
#endif
			ifstream ifil (FILEPERSONS) ;
			ifil >>_lastID ;
#ifdef TESTPERSONS
			cout <<endl <<_lastID <<endl;
#endif
			while (!ifil.eof()) {
    			ifil >>_person._ID ;
				getline(ifil, _person._name) ;
#ifdef TESTPERSONS
			cout <<endl <<_person._ID <<'\t' 
					<<_person._name <<endl;
#endif
			myPersons[_person._ID] = _person._name ;
 			} // while
 			ifil.close() ;
		}
	}
	
	Person getPerson(ID id) ;
	Person setNewPerson () ; // ONE Person only to be added to a map, maybe to a file.dat

	~Persons()
	{ // to write a map into file.dat and to close(file.dat)
	fstream of (FILEPERSONS, fstream::trunc | fstream::out);
	of <<_lastID <<endl;
		for (auto i=myPersons.begin(); i!=myPersons.end(); ++i)
		{
			of  <<(*i).first <<' ' // ID
				<<(*i).second <<endl ; // name 
		};
	of.close() ;
#ifdef TESTPERSONS
			cout <<endl <<"\nDestructor of Persons.h\n" <<endl;
#endif
	}
} ;

Person Persons::getPerson(ID id)
{
	Person res;
	_person._ID = id ;
	_person._name = myPersons[id] ; // at
	return _person ;
} ;

Person Persons::setNewPerson()
{
	_person._ID = _lastID ;
	getline (cin, _person._name) ;
	myPersons[_person._ID] = _person._name ;
	++_lastID;
	return _person ;	
}
