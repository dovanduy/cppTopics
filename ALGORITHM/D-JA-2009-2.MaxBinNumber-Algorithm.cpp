// D-JA-2009-2.MaxBinNumber-Algorithm.cpp
#include <iostream>
// #include <string>
#include <algorithm>

using namespace std;

bool sortWay(char c1, char c2) 
{ 
	return c1 > c2;
}

main ()
{ 
	string binNum ;
	cin >>binNum ;
	sort(binNum.begin(), binNum.end(), sortWay) ;
	cout <<binNum<<endl;
}
