/* Да се напише рекурсивна програма,
която за въведено число n извежда триъгълника: 
n 
n n-1 
n n-1 n-2 
n n-1 n-2 n-3 
…………….. 
n n-1 n-2 n-3 ….3 2 1
*/
#include <iostream>
using namespace std;
void printRow (int n)
{ // ver 1 - Row only
	if (n==1)
	{
		cout <<1;
		return ;
	}
	else
	{
		cout <<n <<' ' ;
		printRow (n-1) ;
		return ;
	}
}
main ()
{
	int n;
	cin >>n;
	printRow (n) ;
}
