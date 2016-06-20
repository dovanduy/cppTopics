#include <iostream>

using namespace std ;

#include "Persons.h"
int main ()
{
	Person p1 ;
	Persons* p = new Persons () ;

	p1=p->selectPerson() ;
	cout <<"\n===\n" <<p1._ID <<"\t" <<p1._name <<"\n===\n" ;
	delete p ;
	
	return 0;
}
