/*	����������� � �������� �� �����
Cources �� ���� ��� ����� Persons.
	� ����� ���������� � �����������
�� ������� ���������� � ����� �����,
����� �� � ������� �� ���������� ����
�� ������������ �� pre-processor-�.
	���� �������� �� ������������
�� ��������������� ��������� ��
Cources.h �� ��������� �����
Cources, � �� ����� Persons.
	���� �������� ������ ����� Cources
�� Cources.h */
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
