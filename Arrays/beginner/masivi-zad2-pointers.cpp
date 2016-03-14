#include<iostream>
using namespace std;

int main()
{
	int n;
	double sum=0;
	double * p;
	double masiv[10];
	p=masiv;
	for( n=0; n<10;n++)
	{
		cin>>(*p) ;
		sum=sum + *p ;
		p++; // to point to next array member
	}
	cout<<sum/10;

	return 0;
}

