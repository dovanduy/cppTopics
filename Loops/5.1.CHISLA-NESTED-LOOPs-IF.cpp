// 5.1.CHISLA.cpp
#include <iostream>
using namespace std;

const int QTYCHARS = 6 ;
const char DELIMITER = ' ';

bool isDigit (char c)
{	return (c>='0' && c<='9') ;	}

int digitValue(char c)
{	return ((int)(c-'0')) ;	}

int main()
{
	char chars [QTYCHARS] ; 		// input variables as original.
	int countNumbers = 0, sum=0, 	// output data 
	power10, tmpNum ; 				// temporary variables
	for (int k=0; k<QTYCHARS; k++) // to read data
		cin >>chars[k] ;
	for (int k = QTYCHARS-1 ; k >= 0; k--) // reverse pass through an array
	  if (isDigit(chars[k]))
		{
			for(power10 = 1, tmpNum=0, countNumbers++ ; 
				(k>=0 && isDigit(chars[k])) ;
				k--, power10 = 10*power10 )
					tmpNum += digitValue(chars[k]) * power10 ;
			sum += tmpNum ;
		}
	if (0 == countNumbers)
		cout <<"NO NUMBERS" ;
	else
		cout <<countNumbers <<DELIMITER <<sum ;
}
