#include<iostream>
using namespace std;


int main()
{
	int smallest, k;
	int masiv[5];
for(int n=0;n<5;n++)
	{
	  cin>>masiv[n];
	};
	for(smallest=masiv[0], k=0; k<5; k++)
		{
			if(masiv[k]<smallest)
			smallest=masiv[k];
		}	
		cout<<smallest;
	
	return 0;
}

