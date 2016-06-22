#include <map>
#include "Persons.h"
#include "Courses.h"

#define FILESTUDENTS "students.dat"
#define FILETEACHERS "teachers.dat"
#define FILEGUESTTEACHERS "guestTeachers.dat"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;
enum CourseStatus {open, close} ;

struct CurrentCourse
{
	ID _personID ; // can be a key pair
	ID _courseID ;
//	CourseStatus _courseStatus ;
} ;

struct Teacher
{
	float _salary ;
	long _days ;
} ;

struct GuestTeacher
{
	float _salary ;
} ;

struct Student
{
	float _average ;
} ;

struct EduData {
	kindOfPerson personType ;
	union {
		Teacher _teacher ;
		GuestTeacher _guestTeacher ;
		Student _student ;
	} ; //  infoCase	
};

struct EduPerson
{
	CurrentCourse crntCourse ; // key
 	EduData eduData ; // map INFOs
} ;

private:
	EduPerson _eduPerson ;
	Person _person ;

	map<ID, EduPerson> myStudents ;
	map<ID, EduPerson> myTeachers ;
	map<ID, EduPerson> myGuestTeachers ;

	EduPerson addEduPerson(kindOfPerson prsnType) ;
	void openDB () ;
	void openStudents() ;
	void openTeachers() ;
	void openGuestTeachers() ;
	void closeDB () ;
	void closeStudents() ;
	void closeTeachers() ;
	void closeGuestTeachers() ;
protected:
	void printStudentList () ;
	void printTeacherList () ;
	void printGuestTeacherList () ;
public:
	EduPersons(){
		openDB();
	}

	void getStudentByID () ;
	void getTeacherByID () ;
	void getGuestTeacherByID () ;
	void addNewStudent() ;
	void addNewTeacher() ;
	void addNewGuestTeacher() ;
	~EduPersons() {
		closeDB() ;
} ;

} ;

void EduPersons::printStudentList ()
{
	ID id ;
	Person p;
	cout <<"\nID\tStudent\n---\t---\n";
	for (auto i=myStudents.begin(); i!=myStudents.end(); ++i)
		{   id = (*i).first ; p = Persons::getPerson(id) ;
			cout 	<<id <<'\t' // Student ID
					<<p._name  // Student names 
					<<endl ;		
		};	
} ;

void EduPersons::printTeacherList ()
{
	ID id ;
	Person p;
	cout <<"\nID\tTeacher\n---\t---\n";
	for (auto i=myTeachers.begin(); i!=myTeachers.end(); ++i)
		{   id = (*i).first ; p = Persons::getPerson(id) ;
			cout 	<<id <<'\t' // Teacher ID
					<<p._name 	// Teacher name 
					<<endl ;		
		};
} ;

void EduPersons::printGuestTeacherList ()
{
	ID id ;
	Person p;
	cout <<"\nID\tGUEST Teacher\n---\t---\n";
	for (auto i=myGuestTeachers.begin(); i!=myGuestTeachers.end(); ++i)
		{   id = (*i).first ; p = Persons::getPerson(id) ;
			cout 	<<id <<'\t' // GuestTeacher ID
					<<p._name 	// GuestTeacher name 
					<<endl ;		
		};
} ;

void EduPersons::getStudentByID ()
{
	ID izbor ;
	Person p;
	Course c;
	this->printStudentList () ;
	cout <<"Select listed ID =>" ;
	cin >>izbor ; Courses::goToNextLine() ;
	_eduPerson = myStudents[izbor] ;
	p = Persons::getPerson(izbor) ;
	c = Courses::getCourse(_eduPerson.crntCourse._courseID) ;
	cout <<"\n\tID:\t\t" <<_eduPerson.crntCourse._personID
		 <<"\n\tStudent:\t" <<p._name
		 <<"\n\tCourse:\t\t" <<c._info._name 
		 <<"\n\tPoints:\t\t" <<c._info._points
		 <<"\n\tAverage mark:\t" <<_eduPerson.eduData._student._average
		 <<endl ;
	return ;	 
}
	
void EduPersons::getTeacherByID ()
{
	ID izbor ;
	Person p;
	Course c;
	this->printTeacherList () ;
	cout <<"Select listed ID =>" ;
	cin >>izbor ; Courses::goToNextLine() ;
	_eduPerson = myTeachers[izbor] ;
	p = Persons::getPerson(izbor) ;
	c = Courses::getCourse(_eduPerson.crntCourse._courseID) ;
	cout <<"\n\tID:\t\t" <<_eduPerson.crntCourse._personID
		 <<"\n\tTeacher:\t" <<p._name
		 <<"\n\tCourse:\t\t" <<c._info._name 
		 <<"\n\tMonthly salary: " <<_eduPerson.eduData._teacher._salary
		 <<"\n\tDays:\t\t" <<_eduPerson.eduData._teacher._days
		 <<endl ;
	return ;
}
	
void EduPersons::getGuestTeacherByID ()
{
	ID izbor ;
	Person p;
	Course c;
	this->printGuestTeacherList () ;
	cout <<"Select listed ID =>" ;
	cin >>izbor ; Courses::goToNextLine() ;
	_eduPerson = myGuestTeachers[izbor] ;
	p = Persons::getPerson(izbor) ;
	c = Courses::getCourse(_eduPerson.crntCourse._courseID) ;
	cout <<"\n\tID:\t\t" <<_eduPerson.crntCourse._personID
		 <<"\n\tTeacher:\t" <<p._name
		 <<"\n\tCourse:\t\t" <<c._info._name 
		 <<"\n\tCourse Fee:\t" <<_eduPerson.eduData._teacher._salary // FEE only
		 <<endl ;
	return ;	
}

EduPersons::EduPerson EduPersons::addEduPerson(kindOfPerson prsnType)
{
	Person prsn ;
	Course crs ;
	prsn = Persons::selectPerson() ;
	_eduPerson.crntCourse._personID = prsn._ID ;
	crs = Courses::selectCourse() ;
	_eduPerson.crntCourse._courseID = crs._ID ;
	switch (prsnType)
	{
		case student: {
			_eduPerson.eduData.personType = student ;
			cout <<"Average evaluation mark =>" ;
			cin >>_eduPerson.eduData._student._average ;
			Courses::goToNextLine() ;
			myStudents[_eduPerson.crntCourse._personID]=_eduPerson ;
			break;
		}
		case teacher: {
			_eduPerson.eduData.personType = teacher ;
			cout <<"Salary =>" ;
			cin >>_eduPerson.eduData._teacher._salary ;
			Courses::goToNextLine() ;
			cout <<"Days =>" ;
			cin >>_eduPerson.eduData._teacher._days ;
			Courses::goToNextLine() ;
			myTeachers[_eduPerson.crntCourse._personID]=_eduPerson ;
			break;
		}
		case guestTeacher: {
			_eduPerson.eduData.personType = guestTeacher ;
			cout <<"Course fee =>" ;
			cin >>_eduPerson.eduData._teacher._salary ;  // Fee only
			Courses::goToNextLine() ;
			myGuestTeachers[_eduPerson.crntCourse._personID]=_eduPerson ;
			break;
		}
	} ;
	return _eduPerson ;
};

void EduPersons::addNewStudent()
{
	this->addEduPerson(student) ;
}

void EduPersons::addNewTeacher()
{
	this->addEduPerson(teacher) ;
}

void EduPersons::addNewGuestTeacher()
{
	this->addEduPerson(guestTeacher) ;
}

void EduPersons::openDB () {
	openStudents() ;
	openTeachers() ;
	openGuestTeachers() ;
} ;

void EduPersons::openStudents() {
	if (! Courses::isFileExist(FILESTUDENTS))
	{	// to creaty an empty file and close it immediately.
		fstream of (FILESTUDENTS, fstream::trunc | fstream::out);
		of.close();
	}
	else
	{ // to INIT a myStudents map from a FILESTUDENTS
		ifstream ifil (FILESTUDENTS) ;
		while (!ifil.eof()) {
    		ifil >>_eduPerson.crntCourse._personID ;
			ifil >>_eduPerson.crntCourse._courseID ;
			_eduPerson.eduData.personType = student ;
			ifil >>_eduPerson.eduData._student._average ;
			myStudents[_eduPerson.crntCourse._personID] = _eduPerson ;
 		} // while
 		ifil.close() ;
	} // else
} ;

void EduPersons::openTeachers() {
	if (! Courses::isFileExist(FILETEACHERS))
	{	// to creaty an empty file and close it immediately.
		fstream of (FILETEACHERS, fstream::trunc | fstream::out);
		of.close();
	}
	else
	{ // to INIT a myStudents map from a FILETEACHERS
		ifstream ifil (FILETEACHERS) ;
		while (!ifil.eof()) {
    		ifil >>_eduPerson.crntCourse._personID ;
			ifil >>_eduPerson.crntCourse._courseID ;
			_eduPerson.eduData.personType = teacher ;
			ifil >>_eduPerson.eduData._teacher._salary ;
			ifil >>_eduPerson.eduData._teacher._days ;
			myTeachers[_eduPerson.crntCourse._personID] = _eduPerson ;
 		} // while
 		ifil.close() ;
	} // else	
} ;

void EduPersons::openGuestTeachers() {
	if (! Courses::isFileExist(FILEGUESTTEACHERS))
	{	// to creaty an empty file and close it immediately.
		fstream of (FILEGUESTTEACHERS, fstream::trunc | fstream::out);
		of.close();
	}
	else
	{ // to INIT a myStudents map from a FILETEACHERS
		ifstream ifil (FILEGUESTTEACHERS) ;
		while (!ifil.eof()) {
    		ifil >>_eduPerson.crntCourse._personID ;
			ifil >>_eduPerson.crntCourse._courseID ;
			_eduPerson.eduData.personType = guestTeacher ;
			ifil >>_eduPerson.eduData._teacher._salary ;
			myGuestTeachers[_eduPerson.crntCourse._personID] = _eduPerson ;
		} // while
 		ifil.close() ;
	} // else
} ;

void EduPersons::closeDB () {
	closeStudents() ;
	closeTeachers() ;
	closeGuestTeachers() ;	
} ;

void EduPersons::closeStudents() {
	ID id;
	fstream of (FILESTUDENTS, fstream::trunc | fstream::out);
		for (auto i=myStudents.begin(); i!=myStudents.end(); ++i)
		{
			id = (*i).first ;
			_eduPerson = myStudents[id] ;
			of  <<id <<' ' // ID
				<<_eduPerson.crntCourse._courseID <<' '
				<<_eduPerson.eduData._student._average
				<<endl ;
		};
	of.close() ;
} ;

void EduPersons::closeTeachers() {
	ID id;
	fstream of (FILETEACHERS, fstream::trunc | fstream::out);
		for (auto i=myTeachers.begin(); i!=myTeachers.end(); ++i)
		{
			id = (*i).first ;
			_eduPerson = myTeachers[id] ;
			of  <<id <<' ' // ID
				<<_eduPerson.crntCourse._courseID <<' '
				<<_eduPerson.eduData._teacher._salary <<' '
				<<_eduPerson.eduData._teacher._days <<' '
				<<endl ;
		};
	of.close() ;	
} ;

void EduPersons::closeGuestTeachers() {
	ID id;
	fstream of (FILEGUESTTEACHERS, fstream::trunc | fstream::out);
		for (auto i=myGuestTeachers.begin(); i!=myGuestTeachers.end(); ++i)
		{
			id = (*i).first ;
			_eduPerson = myGuestTeachers[id] ;
			of  <<id <<' ' // ID
				<<_eduPerson.crntCourse._courseID <<' '
				<<_eduPerson.eduData._teacher._salary <<' '
				<<endl ;
		};
	of.close() ;
};
