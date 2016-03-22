#include <iostream>
using namespace std;
int main ()
{
	int a, del1=1, del2, k;
	cin >>a;
	del2=a;
	for (k=2 ; del1<=del2 && k<=a; k++)
	{
		if (a%k==0)
		{
			del1=k;
			del2=a/del1;
//			cout <<del1 <<' ' <<del2 <<endl ;
		} ;
		if (del1==del2) 
			break ;
	};
	cout <<del2 <<' ' <<del1;
	return 0;
}
