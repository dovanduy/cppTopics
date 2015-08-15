#include<iostream>
// http://bgcoder.com/Contests/161/Telerik-Kids-April-2014-6th-grade-Sunday
using namespace std;

enum minute { red, green, toRed, toGreen };

int const MIN24H = 24*60 ;
int n, countFree,
	k, numH, numM, num1, num2, i, busySize,
	freeInt1[MIN24H], freeInt2[MIN24H] ;
minute freeMin [MIN24H] ;

void readTimes ()
{
	for (k=0; k<MIN24H; k++)
		freeMin[k]=green ;
	for (k=0, 	cin >>n ; k<n; k++)
	{
		cin >>numH >>numM;
		num1 = numH*60 + numM ;
		cin >>numH >>numM;
		num2 = numH*60 + numM ;
		for (i=num1+1; i<num2; i++)
		  freeMin[i] = red ;
		if (freeMin[num1] == green)
			freeMin[num1] = toRed ;
		if ((freeMin[num2] == green && num2-1>num1)) 
		    freeMin[num2-1] = toGreen ;
		else if (num2-1==num1 && freeMin[num2] == green)
		    freeMin[num2] = toGreen ;
	}
}

void printResults ()
{
	cout <<countFree <<endl;
	for (k=0; k<countFree; k++)
	  cout <<freeInt1[k]/60 <<' ' <<freeInt1[k]%60 <<' '
	       <<freeInt2[k]/60 <<' ' <<freeInt2[k]%60 <<endl ;
}

void findResult()
{
	for(countFree=k=0 ; k<MIN24H; k++)
	if (freeMin[k]==green || freeMin[k] == toGreen)
	{
		freeInt1[countFree] = k ;
		for ( ; k<MIN24H && (freeMin[k] != toRed); k++) ;
		freeInt2[countFree] = k  ;
		countFree++;
	}
	else 
		for ( ; k<MIN24H && (freeMin[k] != toGreen); k++) ;

	printResults () ;
}
int main()
{
    readTimes();
    findResult();
    return 0;
}
