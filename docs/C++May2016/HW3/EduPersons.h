#include "Persons.h"
#include "Courses.h"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;

struct CurrentCourse
{
	ID _personName ;
	ID _courseName ;
} ;
struct Teacher
{
	float salary ;
	double days ;
} ;

struct GuestTeacher
{
	float salary ;
} ;

struct EduPerson
{
	CurrentCourse crntCourse ;
	kindOfPerson personType ;
	union {
		Teacher _teacher ;
		GuestTeacher _guestTeacher ;
	} lecturer ;
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
