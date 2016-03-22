#include <iostream>
using namespace std;

bool isDelitel(int num, int del) 
{
	return (num%del==0);
}

int main()
{
	int n, m, num, brDel, brNum, i, del;
	cin >>n >>m;
	for (brNum=0, i=0; i<n; i++)
	{
		cin >>num;
		if (num<0)
			num=-num;
		for (brDel=0, del=2; del<num; del++)
		  	brDel+=isDelitel(num, del);
		  
		brNum += (brDel==m) ;
	} ;
	cout <<brNum;
	return 0;
}
