// Нулев тестов пример за клас Wares
#include <iostream>
#include "Wares.h"
using namespace std;
int main ()
{
	Wares<long long> * pWares = 
		new Wares<long long> () ;
	pWares->printList() ;
	delete pWares ;
	return 0 ;
}
