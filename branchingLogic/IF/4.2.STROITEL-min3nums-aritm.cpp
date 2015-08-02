// STROITEL.cpp
#include <iostream>
using namespace std;
main ()
{
	int a, b, c, d, brA, brB, brC, brD, minHouse ;
	cin >>a >>b >>c >>d ;
	brA = a / 2 ;
	brB = b / 3 ;
	brC = c / 4 ;
	brD = d / 5 ;
	minHouse = (brA < brB) ? brA : brB ;
	minHouse = (brC < minHouse) ? brC : minHouse ;
	minHouse = (brD < minHouse) ? brD : minHouse ;
//	if (minHouse > 0)
		cout 	<<minHouse <<endl 
				<<(a-2*minHouse) <<' '
				<<(b-3*minHouse) <<' '
				<<(c-4*minHouse) <<' '
				<<(d-5*minHouse) ;
//	else
//		cout <<0 <<endl <<a <<b <<c <<d ;
}
