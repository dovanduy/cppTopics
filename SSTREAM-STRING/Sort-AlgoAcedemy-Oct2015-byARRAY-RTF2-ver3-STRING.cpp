// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <iostream>
#include <string> 
// The same speed as array based solution
// + less memory
const int D = (int)('a'-'A') ;	// distance
const int L = (int)('0') ; 		// left
const int R = (int)('z') ;
using namespace std ;
string s ; // BIG data before main()
int main ()
{
	long n ;
	int asciiCode, cnt[R-L+1] ;
	char c ;
	s="";
	for (int k=0; k<(R-L+1); k++) { 
		cnt[k] = 0 ;
	}
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
		if (cnt[ch-L]>0)
			s = s + string(cnt[ch-L], (char)ch) ;
		if (cnt[ch+D-L]>0)
			s = s + string(cnt[ch+D-L], (char)(ch+D)) ;
	} ;
	for (int ch=(int)'1'; ch<=(int)'9'; ch++)
	{
		if (0<cnt[ch-L])
			s = s + string(cnt[ch-L], (char)ch) ;
	} ;
	if (0<cnt[((int)'0')-L])
		s=s + string(cnt[((int)'0')-L], '0') ;
	cout <<s<<endl ;
	return 0 ;
}
