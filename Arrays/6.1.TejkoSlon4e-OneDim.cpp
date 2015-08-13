// 6.1.TejkoSlon4e.cpp
#include <iostream>
using namespace std;
int main ()
{
	double max, t[31] ;
	int n,
		k;
	bool isMax;
	cin >>n;
	for (k=0; k<n; k++)
		cin >>t[k] ;
	for (max=t[0], k=0; k<n; k++)
	  if (max<t[k])
	  	max=t[k] ;
	for (isMax=false, k=0; k<n; k++)
	  if (isMax && max==t[k])
	  	cout <<' '<<(k+1) ;
	  else if (max==t[k])
	  {
	  	cout <<(k+1);
	  	isMax=true;
	  }
}
