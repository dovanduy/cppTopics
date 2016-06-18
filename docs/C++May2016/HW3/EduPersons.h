#include <map>
#include "Persons.h"
#include "Courses.h"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;
enum CourseStatus {open, close} ;

struct CurrentCourse
{
	ID _personID ; // can be a key pair
	ID _courseID ;
	CourseStatus _courseStatus ;
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
protected:

public:
void getStudentByID () ;
void getTeacherByID () ;
void getGuestTeacherByID () ;
void addNewStudent() ;
void addNewTeacher() ;
void addNewGuestTeacher() ;
} ;

void EduPersons::getStudentByID ()
{
	ID izbor ;
	Person p;
	Course c;
	Persons::printPersonList() ;
	cout <<"Select listed ID =>" ;
	cin >>izbor ; Courses::goToNextLine() ;
	_eduPerson = myStudents[izbor] ;
	p = Persons::getPerson(izbor) ;
	c = Courses::getCourse(_eduPerson.crntCourse._courseID) ;
	cout <<"\n\tID: " <<_eduPerson.crntCourse._personID
		 <<"\n\tStudent: " <<p._name
		 <<"\n\tCourse: " <<c._info._name 
		 <<"\n\tPoints: " <<c._info._points
		 <<"\n\tAverage evaluation mark: " <<_eduPerson.eduData._student._average
		 <<endl ;
	return ;	 
}
	
void EduPersons::getTeacherByID ()
{
	
}
	
void EduPersons::getGuestTeacherByID ()
{
	
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
			break;
		}
		case guestTeacher: {
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
	
}
