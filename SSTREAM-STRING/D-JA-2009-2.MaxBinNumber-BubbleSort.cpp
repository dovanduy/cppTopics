// D-JA-2009-2.MaxBinNumber-BubbleSort.cpp
#include <iostream>
// #include <string>
/*
	Note:
	  input as a sequence of octal digits
	  and output as a sequence of hex digits
*/
using namespace std;
main ()
{ 
	string binNum ;
	int k;
	cin >>binNum ;
	for (bool isSwap=false; !isSwap; )
	// bubble Sort
	  for (isSwap=true, k=0; k<binNum.length()-1; k++)
	    if (binNum[k]=='0' && binNum[k+1] == '1')
	    {
	    	swap(binNum[k], binNum[k+1]) ;
	    	isSwap = false ;
	    } ;
	cout <<binNum<<endl;
}
