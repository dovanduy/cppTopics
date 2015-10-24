// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <stdio.h>  // 4 times faster then cin/cout through bgcoder
//#include <iostream>
const int D = (int)('a'-'A') ;	// Distance
const int L = (int)('0') ; 		// Left
const int R = (int)('z') ;
using namespace std ;
int main ()
{
	int n ;
	int asciiCode, cnt[R-L+1] ;
	char c ;
	for (int k=0; k<(R-L+1); k++) cnt[k]=0;
	scanf("%d", &n) ; // // http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <stdio.h>  // 4 times faster then cin/cout through bgcoder
//#include <iostream>
const int D = (int)('a'-'A') ;	// Distance
const int L = (int)('0') ; 		// Left
const int R = (int)('z') ;
using namespace std ;
int main ()
{
	int n ;
	int asciiCode, cnt[R-L+1] ;
	char c ;
	for (int k=0; k<(R-L+1); k++) cnt[k]=0;
	scanf("%d", &n) ;
	for ( ; 0 < n--; )
	{ // count input valid data
		scanf("%d", &asciiCode); //// http://bgcoder.com/Contests/268/Telerik-Algo-Academy-October-2015
// https://github.com/TelerikAcademy/AlgoAcademy/tree/master/2015-10-Algorithms-on-String/Problems
#include <stdio.h>  // 4 times faster then cin/cout through bgcoder
//#include <iostream>
const int D = (int)('a'-'A') ;	// Distance
const int L = (int)('0') ; 		// Left
const int R = (int)('z') ;
using namespace std ;
int main ()
{
	int n ;
	int asciiCode, cnt[R-L+1] ;
	char c ;
	for (int k=0; k<(R-L+1); k++) cnt[k]=0;
	scanf("%d", &n) ; // stdio.h
	for ( ; 0 < n--; )
	{ // count input valid data
		scanf("%d", &asciiCode);
		if  (asciiCode>=L && asciiCode<=R)
			cnt[asciiCode-L]++ ;
	} ;
	// To outup in required order
	cnt['x'-L] = 0 ;
	for (int ch=(int)'A'; ch <= (int)'Z'; ch++)
	{
		for (c=(char)ch; cnt[ch-L]--; )
			printf("%c", c) ;  // stdio.h
		for (c=(char)(ch+D); cnt[ch+D-L]--; )
			printf("%c", c) ;
	} ;
	for (int ch=(int)'1'; ch<=(int)'9'; ch++)
	{
		for (c=(char)ch; 0<cnt[ch-L]--; )
			printf("%c", c) ;
	} ;
	for (c=(char)'0'; 0<cnt[((int)'0')-L]--; )
			printf("%c", c) ;
	printf("\n") ;
	return 0 ;
}

		if  (asciiCode>=L && asciiCode<=R)
			cnt[asciiCode-L]++ ;
	} ;
	// To outup in required order
	cnt['x'-L] = 0 ;
	for (int ch=(int)'A'; ch <= (int)'Z'; ch++)
	{
		for (c=(char)ch; cnt[ch-L]--; )
			printf("%c", c) ;
		for (c=(char)(ch+D); cnt[ch+D-L]--; )
			printf("%c", c) ;
	} ;
	for (int ch=(int)'1'; ch<=(int)'9'; ch++)
	{
		for (c=(char)ch; 0<cnt[ch-L]--; )
			printf("%c", c) ;
	} ;
	for (c=(char)'0'; 0<cnt[((int)'0')-L]--; )
			printf("%c", c) ;
	printf("\n") ;
	return 0 ;
}

	for ( ; 0 < n--; )
	{ // count input valid data
		scanf("%d", &asciiCode);
		if  (asciiCode>=L && asciiCode<=R)
			cnt[asciiCode-L]++ ;
	} ;
	// To outup in required order
	cnt['x'-L] = 0 ;
	for (int ch=(int)'A'; ch <= (int)'Z'; ch++)
	{
		for (c=(char)ch; cnt[ch-L]--; )
			printf("%c", c) ;
		for (c=(char)(ch+D); cnt[ch+D-L]--; )
			printf("%c", c) ;
	} ;
	for (int ch=(int)'1'; ch<=(int)'9'; ch++)
	{
		for (c=(char)ch; 0<cnt[ch-L]--; )
			printf("%c", c) ;
	} ;
	for (c=(char)'0'; 0<cnt[((int)'0')-L]--; )
			printf("%c", c) ;
	printf("\n") ;
	return 0 ;
}
