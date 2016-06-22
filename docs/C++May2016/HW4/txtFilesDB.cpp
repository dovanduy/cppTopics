// Тестов пример за класа txtFilesDB
#include <iostream>
#include <string>
using namespace std ;

#include "txtFilesDB.h"
int main ()
{
	infoArrays::infoRecord p1 ;
//	txtFilesDB<infoArrays::ID> r() ;
	txtFilesDB<infoArrays::ID> * p = 
		new txtFilesDB<infoArrays::ID> ("Names: ", "data1.dat") ;
	if (p==NULL)
	{
		cerr <<"Not enough memory." ;
		return 1 ;
	}
	p->setNewRecord() ;
	delete p ;
return 0 ;
/*
	p1=p->selectPerson() ;
	cout <<"\n===\n" <<p1._ID <<"\t" <<p1._name <<"\n===\n" ;
	delete p ;
	
	return 0;
*/
}
