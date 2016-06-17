#include <iostream>
#include <string>
#include <fstream>
#include <map>
/*
#define Person Course
#define Persons Courses
#define setNewPerson setNewCourse
#define getPerson getCourse
*/
#define FILECOURSES "courses.dat"
#define TESTCOURCES
using namespace std ;

typedef unsigned int ID;

struct Course
{
	string _name ;
	ID _ID;
} ;

class Courses
{
protected:
	Course _course ;
	ID _lastID ;
	map<ID, string> myCourses ;

	bool isFileExist(const char* fileName)
	{	bool res;
    	std::ifstream infile(fileName);
    	res = infile.good() ;
    	infile.close() ;
    	return res;	}
    
public:
	Courses ()
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
    			ifil >>_course._ID ;
				getline(ifil, _course._name) ;
#ifdef TESTCOURCES
			cout <<endl <<_course._ID <<'\t' 
					<<_course._name <<endl;
#endif
			myCourses[_course._ID] = _course._name ;
 			} // while
 			ifil.close() ;
		}
	}
	
	Course getCourse(ID id) ;
	Course setNewCourse () ; // ONE Person only to be added to a map, maybe to a file.dat

	~Courses()
	{ // to write a map into file.dat and to close(file.dat)
	fstream of (FILECOURSES, fstream::trunc | fstream::out);
	of <<_lastID <<endl;
		for (auto i=myCourses.begin(); i!=myCourses.end(); ++i)
		{
			of  <<(*i).first <<'\t' // ID
				<<(*i).second <<endl ; // name 
		};
	of.close() ;
#ifdef TESTCOURCES
			cout <<endl <<"\nDestructor of Courses.h\n" <<endl;
#endif
	}
} ;

Course Courses::getCourse(ID id)
{
	_course._ID = id ;
	_course._name = myCourses[id] ; // at
	return _course ;
} ;

Course Courses::setNewCourse()
{
	_course._ID = _lastID ;
	getline (cin, _course._name) ;
	myCourses[_course._ID] = _course._name ;
	++_lastID;
	return _course ;	
}
