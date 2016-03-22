#include <iostream>
using namespace std ;
int main ()
{
	char a1, a2, a3, a4, a5, a6, a7, a8;
	int sumCharCodes, multiply;
	cin >>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8;
	sumCharCodes =	((int)a1+(int)a2+
					(int)a7+(int)a8)/10;
	multiply = 	((int)(a3-'0'))*(int)(a4-'0')*
				((int)(a5-'0'))*((int)(a6-'0')) ;
	if (multiply == sumCharCodes)
		cout <<"Yes " <<multiply <<endl ;
	else
		cout <<"No" <<endl ;
	return 0;
}
