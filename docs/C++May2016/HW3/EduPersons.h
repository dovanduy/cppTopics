#include "Persons.h"
#include "Courses.h"

class EduPersons : public Courses, public Persons
{
enum kindOfPerson {student, teacher, guestTeacher} ;
private:
	kindOfPerson personType ;
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
