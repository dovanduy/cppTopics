// ISO C++11
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#define FILECOURSES "courses.dat"
//#define TESTCOURCES
using namespace std ;

typedef unsigned int ID;

struct CourseInfo
{
	int _points;
	string _name ;
} ;

struct Course
{
	ID _ID;
	CourseInfo _info ;
} ;

class Courses
{
protected:
	Course _course ;
	ID _lastID ;
	map<ID, CourseInfo> myCourses ;
    
public:
	bool isFileExist(const char* fileName)
	{	bool res;
    	std::ifstream infile(fileName);
    	res = infile.good() ;
    	infile.close() ;
    	return res;	}
    	
	Courses ()
	{
		if (! isFileExist(FILECOURSES))
		{	// to creaty an empty file and close it immediately.
			_lastID=0 ;
			fstream of (FILECOURSES, fstream::trunc | fstream::out);
#ifdef TESTCOURCES
			cout <<"\n" <<FILECOURSES <<" created. "
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
    			ifil >>_course._info._points ;
				getline(ifil, _course._info._name) ;
#ifdef TESTCOURCES
			cout <<endl <<_course._ID <<'\t' 
			<<_course._info._points <<'\t'
					<<_course._info._name <<endl;
#endif
			myCourses[_course._ID] = _course._info ;
 			} // while
 			ifil.close() ;
		}
	}
	
	Course getCourse(ID id) ;
	Course setNewCourse() ; // ONE Person only to be added to a map, maybe to a file.dat
	void printCourseList() const ;
	Course selectCourse() ;

	~Courses()
	{ // to write a map into file.dat and to close(file.dat)
	fstream of (FILECOURSES, fstream::trunc | fstream::out);
	of <<_lastID <<endl;
		for (auto i=myCourses.begin(); i!=myCourses.end(); ++i)
		{
			of  <<(*i).first <<' ' // ID
				<<((*i).second._points) //<<' '
				<<(*i).second._name <<endl ; // name 
		};
	of.close() ;
#ifdef TESTCOURCES
			cout <<endl <<"\nDestructor of Courses.h\n" <<endl;
#endif
	}

	void goToNextLine()
	{
	if (cin.peek() == '\n') {
		cin.ignore(1 /*numeric_limits<streamsize>::max()*/, '\n');
		} 
	} ;

} ;

Course Courses::getCourse(ID id)
{
	_course._ID = id ;
	_course._info = myCourses[id] ; // at
	return _course ;
} ;

Course Courses::setNewCourse()
{
	int points;
	_course._ID = _lastID ;
	cout <<"\nCourse POINTs: " ;
	cin >>points ;
	_course._info._points = points ;
	cout <<"\nCourse NAME: " ;
	goToNextLine() ;
	getline (cin, _course._info._name ) ;
	myCourses[_course._ID] = _course._info ;
	++_lastID;
	return _course ;	
}

void Courses::printCourseList() const
{
	cout <<"\nID\tPoints\tCourse\n---\t---\t---\n";
	for (auto i=myCourses.begin(); i!=myCourses.end(); ++i)
		{
			cout  <<((int)((*i).first)) <<'\t' // ID
				<<((*i).second._points) <<'\t'
				<<((*i).second._name) <<endl ; // name 
		};
};

Course Courses::selectCourse()
{
	ID id;
	this->printCourseList() ;
	cout <<"Select listed ID =>" ;
	cin >>id ; this->goToNextLine() ;
	return this->getCourse(id) ;
};
