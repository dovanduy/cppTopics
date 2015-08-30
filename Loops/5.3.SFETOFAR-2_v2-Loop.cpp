// 5.3SFETOFAR_v2.cpp
#include <iostream>
using namespace std;
main ()
{
	short n, currentClr = 1,
		  step, prevClr,
		  redCounter = 0, yellowCounter = 0, greenCounter = 0 ;
	cin >>n ;
	for (step = 0 ; step <= n; step++) // color is changed n+1 times!
	{
			
		if (currentClr == 1)  // RED
		    {
		    	redCounter++ ;
		    	currentClr = 2 ; // yellow
		    	prevClr = 1;
		    }	
		else if (currentClr == 2) // YELLOW
			{
				yellowCounter++ ; 
				if (prevClr == 1)    // red
					currentClr = 3 ; // green
				else if (prevClr == 3)
					currentClr = 1 ; // red
				else
					cerr <<'?' ;
				prevClr = 2 ;	// yellow
			}
		else if (currentClr == 3) // GREEN
			{
				greenCounter++ ;
				prevClr = 3 ;	// green
				currentClr = 2 ; // yellow
			}
		else
			cerr <<'?' ;
	}; 
	
	cout <<yellowCounter <<' ' <<redCounter <<' ' <<greenCounter ;
}
