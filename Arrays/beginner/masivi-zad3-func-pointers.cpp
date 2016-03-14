#include<iostream>
using namespace std;


void readMasiv(int * masiv, int dimMasiv)
{
	int * p;
	p=masiv;
	for (int k=0; k<dimMasiv; k++)
	{
		cin >>(*p) ;
		p++;
	}
}

int smallestMember (int * masiv, int dimMasiv)
{
	int res, k;
	int * p;
	p=masiv;
	cout <<endl <<'='<<(*p);
	for (k=0, res=*p; k<dimMasiv; k++)
	{
		cout <<endl <<res <<" k= "<<k;
	if ((*p)<res)
	{
		res=*p;
		
	} ; p++;	
	}
	
		
	cout <<endl <<'='<<res;
	return res;
}

int main()
{
	int smallest, k, r;
	int masiv[5];
	readMasiv(masiv, 5) ;
	for (k=0; k<5; k++)
		cout <<masiv[k] <<' ';
	r=smallestMember(masiv, 5);
	cout <<r;
	return 0;
}

