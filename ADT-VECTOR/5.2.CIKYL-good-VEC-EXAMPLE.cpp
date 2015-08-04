// 5.2.CIKYL-good-VEC-EXAMPLE.cpp
#include <iostream>
#include <vector>
using namespace std;
// http://bgcoder.com/Contests#!/List/ByCategory/37/Telerik-Kids-Academy-2013-2014
vector<int> numSequence ;
int				num, 		// input
				nextNum;	// output

int calcNum(int a)
{
	int sum;
	for (sum = 0; 0 != a; a=a/10)
		sum = sum + ((a%10)*(a%10)) ;
	return sum ;
}

int main ()
{
	cin >>num ;
	numSequence.push_back(num) ;
	do
	{
		nextNum = calcNum(num) ;
		//cout <<"\t" <<nextNum <<endl ;
		for(vector<int>::iterator i=numSequence.begin() ; i != numSequence.end(); ++i)
		if ((*i) == nextNum)
		{
			cout <<nextNum ;
			return 0 ;
		}

		numSequence.push_back(nextNum) ;
		num = nextNum ;	

	} while (true) ;
}
