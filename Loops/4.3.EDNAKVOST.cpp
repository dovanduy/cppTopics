// EDNAKVOST.cpp
#include <iostream>
using namespace std;

int main()
{		// input variables as original.
	int qtyFigTypes, qtyClrs, qtyFig, numFigType, numFigTypeToBeClr,
		// a set of temporary variables during algo tilth.
		seqNum, currentClr,	currentFigType,
		// output variables 
		counter = 0 ;		
	cin >>qtyFigTypes >>qtyClrs >>qtyFig >>numFigType >>numFigTypeToBeClr ;
	for (seqNum = 1, currentFigType = 1, currentClr = 1; 
		 seqNum <= qtyFig; 
		 seqNum++, currentClr++, currentFigType++ )
	{
		if (currentClr > qtyClrs)
			currentClr = 1;
		if (currentFigType > qtyFigTypes)
			currentFigType = 1;
		if (currentFigType == numFigType &&
			currentClr == numFigTypeToBeClr)
			counter++ ;
	} ;
	cout <<counter ;
}
