/*	����������� � �������� �� �����
Courses �� ���� ��� ����� Persons.
	� ����� ���������� � �����������
�� ������� ����������� � ����� �����,
����� �� �� ������ ���� ��� ������� �����.
	���� �������� ������ ����� Courses
�� Courses.h */
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
	cout <<endl <<p1._ID <<'\t' 
	<<'\t'<<((int)(p1._info._points))<<p1._info._name <<"\n===";

	p1=p->setNewCourse() ;
	cout <<p1._ID <<'\t' <<p1._info._name;
	p1=p->getCourse(1) ;
	cout <<endl <<p1._ID <<"\t" <<p1._info._name <<"\n===";
	p->~Courses() ;
	return 0;
}
