// Тестов пример за класа txtFilesDB
#include <iostream>
#include <string>
using namespace std ;

#include "txtFilesDB.h"
int main ()
{
	infoArrays::infoRecord p1 ;
	txtFilesDB<infoArrays::ID> * p = 
		new txtFilesDB<infoArrays::ID> ("Names: ", "data1.dat") ;
	if (p==NULL)
	{
		cerr <<"Not enough memory." ;
		return 1 ;
	}

	p1=p->selectRecord() ;
	cout <<"\n===\n" <<p1._id <<"\t" <<p1._description <<"\n===\n" ;
	delete p ;
	
	return 0;

}
