// 6.2.CIFRI.cpp
// http://bgcoder.com/Contests/102/Telerik-Kids-October-2013-6th-grade-Sunday
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	long long k, i, counter[10], t[10] ;
	string s;
	char c;
	cin >>s ;
	for (k=0; k<10; k++)
	{
		counter[k] = t[k] = 0 ;
		c = (char)(k+'0') ;
		for (i=0; i<s.length(); i++)
		if (s[i]==c)
			counter[k]++ ;
	} ;
	
	for (k=0; k<10; k++)
	  if (0 < counter[k])
		t[k]=(counter[k]+k*counter[k])*10+k;
		
	for (bool sorted=false; !sorted; )
	{ // custom bubble sort
		for (sorted=true, k=0; k<9; k++)
		if (t[k]/10 > t[k+1]/10)
		{
			sorted = false;
			i = t[k];
			t[k] = t[k+1];
			t[k+1] = i;
		}
		else if ((t[k]/10 == t[k+1]/10) && (t[k]%10 < t[k+1]%10))
		{
			sorted = false;
			i = t[k];
			t[k] = t[k+1];
			t[k+1] = i;
		}
	};
//	for (k=0; k<10; k++)
//		cout<<endl <<t[k] ;
//	cout <<endl;
	for (k=0; t[k]==0; k++) ;

	if (t[k] % 10 == 0)
		k=k+1;

	for ( ; k<10; k++)
	  if (0 < t[k])
	  for ( ; counter[t[k]%10]>0; --counter[t[k]%10])
	  	cout <<t[k]%10 ;
	
}
