#include <iostream>

using namespace std ;

#include "Persons.h"
int main ()
{
	Person p1 ;
	Persons* p = new Persons () ;
	p->printPersonList() ;

	p1=p->setNewPerson() ;
	cout <<"\n===\n" <<p1._ID <<"\t" <<p1._name <<"\n===\n" ;
	
	p->printPersonList() ;
	
	p->~Persons() ;
	return 0;
}
