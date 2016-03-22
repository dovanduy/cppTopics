#include <iostream>
using namespace std;

int charToDig (char c)
{
	return ((int)(c-'0'));
}

int main()
{
	char c ;
	int sum, d;
	for (sum=0, cin>>c; c!='.'; cin>>c)
	{
		d=charToDig(c) ;
		sum+=d;
	} ;
	cout <<(d%2==0) <<' '
		 <<(sum%3==0) <<' '
		 <<(d%5==0) ;
	return 0;
}
