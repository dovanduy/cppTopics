/*	Структурата и логиката на класа
Courses са като при класа Persons.
	С оглед различието в семантиката
на данните съхранявани в двата класа,
реших да ги оформя като два отделни класа.
	Тази програма:
	- тества класа Courses от Courses.h
	- въвежда номенклатура от курсове */
#include <iostream>

using namespace std ;

#include "Courses.h"
int main ()
{
	Course p1 ;
	Courses* p = new Courses () ;
	p->printCourseList() ;

	p1=p->setNewCourse() ;
	cout <<"\n===\n" <<p1._ID 
	<<'\t'<<((int)(p1._info._points))
	<<'\t' <<p1._info._name <<"\n===\n";

	p1=p->selectCourse() ;
	cout <<"\n===\n" <<p1._ID 
	<<'\t'<<((int)(p1._info._points))
	<<'\t' <<p1._info._name <<"\n===\n";
	
	p->~Courses() ;
	return 0;
}
