#include <iostream>
#include <string>
using namespace std;
typedef int lng ;
string a0="1", a1="1", num ; 
lng k, currentDigit = 2;

char numToChar (lng n)
{
	return ((char)('0'+n%10)) ;
}

lng charToNum (char c)
{
	return ((lng)(c-'0')) ;
}


string addStrings (string a0, string a1)
{
	string res = "";
	lng i, sum=0 ;
	if (a0.length() < a1.length())
		swap(a0, a1) ;
	if (a0.length()>a1.length())
	{
		// to fill leading zeros to a1
		for (lng k=0; k<(a0.length()-a1.length()); ++k)
		  a1 = '0' + a1;
	} ;
	
	for (i=a0.length()-1; i>=0; --i)
	{
		sum = sum + charToNum(a0[i]) + charToNum(a1[i]) ;
	//	res = numToChar(sum%10) + res ;
		res.insert(0, 1, numToChar(sum%10)) ;
		sum = sum/10 ; // PRENOS mayBe
	} ;
	
	if (sum>0) // ima prenos
		res.insert(0, 1, numToChar(sum)) ;
	return res ;
}

int main ()
{
	string fibLine="11" ;
	lng cDig = 2 ;
	cin >>k ; // 2<k<50 000 000
	while (cDig < k)
	{
		num = addStrings(a0, a1) ;
		a0 = a1 ;
		a1 = num ;
		cDig = cDig + num.length() ;
	} ; 
	cout <<num[num.length()-(cDig-k)-1] ;
}
