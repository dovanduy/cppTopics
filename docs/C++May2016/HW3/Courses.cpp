/*	����������� � �������� �� �����
Courses �� ���� ��� ����� Persons.
	� ����� ���������� � �����������
�� ������� ����������� � ����� �����,
����� �� �� ������ ���� ��� ������� �����.
	���� ��������:
	- ������ ����� Courses �� Courses.h
	- ������� ������������ �� ������� */
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
