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
	void printStudentList () ;
	void printTeacherList () ;
	void printGuestTeacherList () ;
public:
void getStudentByID () ;
void getTeacherByID () ;
void getGuestTeacherByID () ;
void addNewStudent() ;
void addNewTeacher() ;
void addNewGuestTeacher() ;

~EduPersons() {
//	Persons::writeToDB() ;
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
	cout <<"\n\tID:\t" <<_eduPerson.crntCourse._personID
		 <<"\n\tStudent:\t" <<p._name
		 <<"\n\tCourse:\t" <<c._info._name 
		 <<"\n\tPoints:\t" <<c._info._points
		 <<"\n\tAverage evaluation mark: " <<_eduPerson.eduData._student._average
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
