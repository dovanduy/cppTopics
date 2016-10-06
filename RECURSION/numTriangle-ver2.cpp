/* Да се напише рекурсивна програма,
която за въведено число n извежда пирамидата: 
n 
n n-1 
n n-1 n-2 
n n-1 n-2 n-3 
…………….. 
n n-1 n-2 n-3 ….3 2 1
*/
#include <iostream>
using namespace std;
void printRow (int n, int k)
{
	if (n == k)
	{
		cout <<k;
		return ;
	}
	else
	{
		cout <<n <<' ' ;
		printRow (n-1, k) ;
		return ;
	}
}
main ()
{
	int n;
	cin >>n;
	printRow (n, 3) ;
}
