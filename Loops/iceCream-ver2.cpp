//
#include <iostream>
using namespace std ;
int main ()
{
	int k, porc;
	cin >>k;
	for (porc=0;  (porc*3 <= k) ;porc++)
	  if ((k-porc*3) % 7 == 0)
	  {
		cout <<"YES\n" <<porc <<"*3+"
			<<(k-porc*3)/7<<"*7\n";
		return 0;
	  }
	cout <<"NO";
	return 0;
}
