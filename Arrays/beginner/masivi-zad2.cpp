#include<iostream>
using namespace std;

int main()
{
	int n;
	double sum=0;
	double masiv[10];
	for( n=0; n<10;n++)
	{
		cin>>masiv[n];
		sum=sum+masiv[n];
	}
	cout<<sum/10;
	
	
	return 0;
}

