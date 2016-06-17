/*	Структурата и логиката на класа
Cources са като при класа Persons.
	С оглед различието в семантиката
на данните съхранявани в двата класа,
реших да ги оформя като два отделни класа.
	Тази програма тества класа Courses
от Courses.h */
#include <iostream>

using namespace std ;

#include "Courses.h"
int main ()
{
	Course p1 ;
	Courses* p = new Courses () ;

	p1=p->setNewCourse() ;
	cout <<p1._ID <<"\t" <<p1._info._name;
	p1=p->getCourse(0) ;
	cout <<endl <<p1._ID <<"\t" <<p1._info._name <<"\n===";

	p1=p->setNewCourse() ;
	cout <<p1._ID <<"\t" <<p1._info._name;
	p1=p->getCourse(1) ;
	cout <<endl <<p1._ID <<"\t" <<p1._info._name <<"\n===";
	p->~Courses() ;
	return 0;
}
