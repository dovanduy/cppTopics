#include <iostream>
#include <string>
#include <fstream>
#include <map>
#define Person Course
#define Persons Courses
#define FILECOURSES "courses.dat"
#define setNewPerson setNewCourse
#define getPerson getCourse
#define TESTCOURCES
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
		if (! isFileExist(FILECOURSES))
		{	// to creaty an empty file and close it immediately.
			_lastID=0 ;
			fstream of (FILECOURSES, fstream::trunc | fstream::out);
#ifdef TESTCOURCES
			cout <<"\n" <<FILECOURSES <<" created\n"
			<<(int)_lastID <<endl;
#endif
			of <<_lastID ;
			of.close();
		}
		else
		{ // to INIT a MAP from a FILE
#ifdef TESTCOURCES
			cout <<"\n" <<FILECOURSES <<" exists already.\n";
#endif
			ifstream ifil (FILECOURSES) ;
			ifil >>_lastID ;
#ifdef TESTCOURCES
			cout <<endl <<_lastID <<endl;
#endif
			while (!ifil.eof()) {
    			ifil >>_person._ID ;
				getline(ifil, _person._name) ;
#ifdef TESTCOURCES
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
	fstream of (FILECOURSES, fstream::trunc | fstream::out);
	of <<_lastID <<endl;
		for (auto i=myPersons.begin(); i!=myPersons.end(); ++i)
		{
			of  <<(*i).first <<' ' // ID
				<<(*i).second <<endl ; // name 
		};
	of.close() ;
#ifdef TESTCOURCES
			cout <<endl <<"\nDestructor of Courses.h\n" <<endl;
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
