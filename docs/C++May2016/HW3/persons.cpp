#include <iostream>
#include <string>

using namespace std ;

#include "Persons.h"
int main ()
{
	Person p1 ;
	Persons* p = new Persons () ;

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
	p->~Persons() ;
	return 0;
}
