// D-JA-2009-2.MaxBinNumber-LoopOnly.cpp
#include <iostream>
// #include <string>

const char NEWLINE = '\n' ;
using namespace std;

main ()
{ 
	char ch ;
	int totalCnt=0, oneCnt=0 ; 
	for ( ; (ch=cin.get()) != NEWLINE; totalCnt++)
	if (ch == '1')
		oneCnt++ ;
	for (int k=0; k<oneCnt; k++)
		cout <<'1';
	for (int k=0; k<totalCnt-oneCnt; k++)
		cout <<'0';
	cout <<endl;
	return 0;
}
