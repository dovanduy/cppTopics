// 5.3SFETOFAR_v3.cpp
#include <iostream>
using namespace std;
enum colors {green, yellow, red};
main ()
{ // V3 runs slower vs V2
	enum 	colors 	currentClr,
						prevClr;
	short n,
		  step,
		  redCounter = 0, yellowCounter = 0, greenCounter = 0 ;
	cin >>n ;
	for (currentClr = red, step = 0 ; step <= n; step++) // color is changed n+1 times!
		if (currentClr == red) 
		    {
		    	redCounter++ ;
		    	currentClr = yellow ; // after RED
		    	prevClr = red ;
		    }	
		else if (currentClr == yellow)
			{
				yellowCounter++ ; 
				if (prevClr == red)
					currentClr = green ; 	// The next color will be green
				else if (prevClr == green)
					currentClr = red ; 		// red is a next color
				else
					cerr <<'?' ;
				prevClr = yellow ;			// yellow is an old color
			}
		else if (currentClr == green)
			{
				greenCounter++ ;
				prevClr = green ;		// green is an old color
				currentClr = yellow ; 	// yellow is a new color
			}
		else
			cerr <<'?' ; 
	cout <<yellowCounter <<' ' <<redCounter <<' ' <<greenCounter ;
}
