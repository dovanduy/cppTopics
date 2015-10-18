// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <iostream>
const int D = (int)('a'-'A') ;	// distance
const int L = (int)('0') ; 		// left
const int R = (int)('z') ;
using namespace std ;
int main ()
{
	long n ;
	int asciiCode, cnt[R-L+1] ;
	char c ;
	for (int k=0; k<(R-L+1); k++) cnt[k]=0;
	//for (int k=0; k<(R-L); k++) cout<<cnt[k];
	cin >>n ;
	for ( ; 0 < n--; )
	{ // count input valid data
		cin >>asciiCode;
		if  (asciiCode>=L && asciiCode<=R)
			cnt[asciiCode-L]++ ;
	} ;
	// To outup in required order
	cnt['x'-L] = 0 ;
	for (int ch=(int)'A'; ch <= (int)'Z'; ch++)
	{
		for (c=(char)ch; cnt[ch-L]--; )
			cout <<c ;
		for (c=(char)(ch+D); cnt[ch+D-L]--; )
			cout <<c ;
	} ;
	for (int ch=(int)'1'; ch<=(int)'9'; ch++)
	{
		for (c=(char)ch; 0<cnt[ch-L]--; )
			cout <<c ;
	} ;
	for (c=(char)'0'; 0<cnt[((int)'0')-L]--; )
			cout <<c ;
	cout <<endl ;
	return 0 ;
}
