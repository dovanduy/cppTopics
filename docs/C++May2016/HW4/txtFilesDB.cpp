// Тестов пример за класа txtFilesDB
#include <iostream>
#include <string>
using namespace std ;

#include "txtFilesDB.h"
int main ()
{
	infoArrays::infoRecord p1, p2 ;
	txtFilesDB<infoArrays::ID> * pWare = 
		new txtFilesDB<infoArrays::ID> ("Ware Names: ", "wares.dat") ;
	if (pWare == NULL)
	{
		cerr <<"Not enough memory, pWare." ;
		return 1 ;
	} ;
	
	txtFilesDB<infoArrays::ID> * pWarePrice = 
		new txtFilesDB<infoArrays::ID> ("How much money? ", "prices.dat") ;
	if (pWarePrice == NULL)
	{
		cerr <<"Not enough memory, pPrice." ;
		return 1 ;
	} ;
	
// Въвежда се Инфо (Стока, Цена)
	p1 = pWare -> setNewRecord() ;
	cout <<"\n===\n" <<p1._id <<"\t" <<p1._description <<"\n===\n" ;
	p2 = pWarePrice-> setNewRecord() ;
	cout <<"\n===\n" <<p2._id <<"\t" <<p2._description <<"\n===\n" ;
	pWare->printList();
	pWarePrice -> printList();
	delete pWare ;
	delete pWarePrice ;
	
	return 0;
}
