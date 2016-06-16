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
			fstream of (FILEPERSONS, fstream::trunc | fstream::out | fstream::binary);
#ifdef TESTPERSONS
			cout <<"\n" <<FILEPERSONS <<" created\n";
#endif
			of <<_lastID ;
			of.close();
		}
		else
		{ // to init a map from a file
#ifdef TESTPERSONS
			cout <<"\n" <<FILEPERSONS <<" exists already.\n";
#endif
		}
	}
	
	Person getPerson(ID id) ;
	Person setNewPerson () ; // ONE Person only to be added to a map, maybe to a file.dat

	~Persons()
	{ // to write a map into file.dat and to close(file.dat)
	fstream of (FILEPERSONS, fstream::trunc | fstream::out | fstream::binary);
	of <<_lastID;
		for (auto i=myPersons.begin(); i!=myPersons.end(); ++i)
		{
			of <<(*i).second // name 
				<<(*i).first ; // ID
		};
	of.close() ;
	}
} ;

Person Persons::getPerson(ID id)
{
	Person res;
	_person._ID = id ;
	_person._name = myPersons.at(id) ;
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
