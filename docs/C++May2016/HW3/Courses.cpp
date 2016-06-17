/*	Структурата и логиката на класа
Cources са като при класа Persons.
	С оглед различието в семантиката
на данните съхранявани в двата класа,
реших че е полезно да понатрупам опит
за използванета на pre-processor-а.
	Като резултат от използването
на предроцесорните директиви от
Courses.h се компилира класа
Courses, а не класа Persons.
	Тази програма тества класа Courses
от Courses.h */
#include <iostream>

using namespace std ;

#include "Courses.h"
int main ()
{
	Course p1 ;
	Courses* p = new Courses () ;

	cout <<"\nCourse name =>" ;
	p1=p->setNewCourse() ;
	cout <<p1._ID <<"\t" <<p1._name;
	p1=p->getCourse(0) ;
	cout <<endl <<p1._ID <<"\t" <<p1._name <<"\n===";

	cout <<"\nCourse name =>" ;
	p1=p->setNewCourse() ;
	cout <<p1._ID <<"\t" <<p1._name;
	p1=p->getCourse(1) ;
	cout <<endl <<p1._ID <<"\t" <<p1._name <<"\n===";
	p->~Courses() ;
	return 0;
}
