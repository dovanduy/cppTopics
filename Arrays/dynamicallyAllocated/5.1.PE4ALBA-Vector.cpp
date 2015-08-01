// 5.1.PE4ALBA-DynArray.cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> boxes ; // vector components CAN be a short type.
int		n, p, q,	// input
		k,  currentBox, tmp,
		profit ;	// output
void finish ()
{ // finish() CLOSES and prepare to EXIT.
	cout <<profit ;
	return ;
}

int main ()
{
	cin >>n ; // number of vector components, boxes

	for (k=0; k<n; k++)	// to init an array
	{
		cin >>tmp;
		boxes.push_back(tmp) ;
	}

	cin >>p >>q; // 3rd line

	for (profit=0, currentBox=p-1, k=0 ; k<q; k++)
		if (0==boxes.at(currentBox))
		{ // box TYPE 1
			profit = 0 ;
			finish() ;
			return 0;
		}
		else if ( boxes.at(currentBox) >= 1 && boxes.at(currentBox)<=n )
		{ // box TYPE 2
			tmp = boxes.at(currentBox) ;
			//boxes[currentBox] = 0 ; // no key yet, i.e now it is box TYPE 1.
			currentBox = tmp - 1;
		}
		else
		{
			profit+=boxes.at(currentBox) ;
			currentBox = boxes.at(currentBox) % n ;
		}

	finish () ;
	return 0;
}
