#include <iostream>
using namespace std;
int main ()
{
	int a;
	cin >>a;
	cout 	<<(a/100%10) <<'\n'
			<<(a/10%10) <<'\n'
			<<(a%10) <<'\n' ;
	return 0;
}
