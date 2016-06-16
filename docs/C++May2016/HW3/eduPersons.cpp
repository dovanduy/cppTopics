#include <iostream>
#define BASE_INHERITANCE_TEST
using namespace std ;

#include "EduPersons.h"
int main ()
{
	Person p1 ;
	EduPersons* p = new EduPersons () ;
#ifdef BASE_INHERITANCE_TEST
	cout <<"\nNames =>" ;
	p1=p->setNewPerson() ;
	cout <<p1._ID <<"\t" <<p1._name;
	p1=p->getPerson(0) ;
	cout <<endl <<p1._ID <<"\t" <<p1._name <<"\n===";
	
	cout <<"\nNames =>" ;
	p1=p->setNewPerson() ;
	cout <<p1._ID <<"\t" <<p1._name;
	p1=p->getPerson(1) ;
	cout <<endl <<p1._ID <<"\t" <<p1._name <<"\n===";
#endif
	return 0;
}
