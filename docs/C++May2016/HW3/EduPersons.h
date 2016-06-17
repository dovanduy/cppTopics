#include "Persons.h"
#include "Courses.h"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;
enum CourseStatus {open, close} ;

struct CurrentCourse
{
	ID _personName ;
	ID _courseName ;
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
	} infoCase ;
} ;

private:
	kindOfPerson personType ;
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

void EduPersons::addNewStudent()
{
	
}

void EduPersons::addNewTeacher()
{
	
}

void EduPersons::addNewGuestTeacher()
{
	
}
