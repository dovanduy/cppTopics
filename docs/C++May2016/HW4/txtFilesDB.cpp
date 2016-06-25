// Тестов пример за класа txtFilesDB
#include <iostream>
#include <string>
using namespace std ;

#include "txtFilesDB.h"
int main ()
{
	infoArrays::infoRecord p1 ;
	TxtFilesDB<infoArrays::ID> * pWare = 
		new TxtFilesDB<infoArrays::ID> ("Ware Names: ", "csv-wares.dat") ;
	if (pWare == NULL)
	{
		cerr <<"Not enough memory, pWare." ;
		return 1 ;
	} ;
	
	TxtFilesDB<infoArrays::ID> * pWarePrice = 
		new TxtFilesDB<infoArrays::ID> ("How much money? ", "csv-prices.dat") ;
	if (pWarePrice == NULL)
	{
		cerr <<"Not enough memory, pPrice." ;
		return 2 ;
	} ;

// Въвежда се Инфо (Стока, Цена)
	p1 = pWare -> selectRecord() ;
	p1 = pWarePrice-> selectRecord() ;

	delete pWare ;
	delete pWarePrice ;
	
	return 0;
}
