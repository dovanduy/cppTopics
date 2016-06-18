#include "Persons.h"
#include "Courses.h"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;
enum CourseStatus {open, close} ;

struct CurrentCourse
{
	ID _personID ;
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

struct EduPerson
{
	CurrentCourse crntCourse ;
	kindOfPerson personType ;
	union {
		Teacher _teacher ;
		GuestTeacher _guestTeacher ;
		Student _student ;
	} ; //  infoCase 
} ;

private:
	EduPerson _eduPerson ;
	Person _person ;
	EduPerson addEduPerson(kindOfPerson prsnType) ;
protected:

public:
string getStudentByID () ;
string getTeacherByID () ;
string getGuestTeacherByID () ;
void addNewStudent() ;
void addNewTeacher() ;
void addNewGuestTeacher() ;
} ;

string EduPersons::getStudentByID ()
{
	
}
	
string EduPersons::getTeacherByID ()
{
	
}
	
string EduPersons::getGuestTeacherByID ()
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
			_eduPerson.personType = student ;
			cout <<"Average evaluation mark =>" ;
			cin >>_eduPerson._student._average ;
			Courses::goToNextLine() ;
			break;
		}
		case teacher: {
			break;
		}
		case guestTeacher: {
			break;
		}
	}
	return _eduPerson ;
};

void EduPersons::addNewStudent()
{
	this->addEduPerson(student) ;
}

void EduPersons::addNewTeacher()
{
	
}

void EduPersons::addNewGuestTeacher()
{
	
}
