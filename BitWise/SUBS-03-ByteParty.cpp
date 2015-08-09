// SUBS-03.ByteParty.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// https://judge.softuni.bg/Contests/77/Programming-Basics-March-Lab
unsigned int flipBit (unsigned int number, unsigned int bitPosition)
{ // flip means to exchange bit values
	unsigned int mask ;
	mask = 1<<bitPosition ;
	if (0 == (number & mask))
		return (number | mask) ; // if Bit is 0 Then Bit is chagned to 1
	else
		return ((~mask) & number) ; // if Bit is 1 Then Bit is chagned to 0
}

unsigned int unSetBit (unsigned int number, unsigned int bitPosition)
{ // The Bit at bitPosition will be 0
	unsigned int mask ;
	mask = 1<<bitPosition ;
	return ((~mask) & number) ;
}

unsigned int setBit (unsigned int number, unsigned int bitPosition)
{ // The Bit at bitPosition will be 1
	unsigned short mask ;
	mask = 1<<bitPosition ;
	return (mask | number) ;
}

int main()
{
	unsigned int	n, 
					e, k, bitPos ;
	vector<unsigned int> num ;
	vector<unsigned int>::iterator i ;
	string s ;
	cin >>n;
	for (k=0; k<n; k++)
	{
		cin >>e ;
		num.push_back(e) ;
	} ;
/*
	for (i=num.begin() ; i!=num.end(); i++)
		*i = flipBit(*i, 0) ;
	for (cout <<endl, i=num.begin() ; i!=num.end(); i++)
		cout <<*i <<' ';
*/
///*
	for(cin >>s; s!= "party"; cin>>s)
	{
		cin >>bitPos;
		if (s == "-1")
			for (i=num.begin() ; i!=num.end(); i++)
				*i = flipBit(*i, bitPos) ;
		else if (s == "0")
			for (i=num.begin() ; i!=num.end(); i++)
				*i = unSetBit(*i, bitPos) ;
		else if (s == "1")
			for (i=num.begin() ; i!=num.end(); i++)
				*i = setBit(*i, bitPos) ;
		else
		{
			cerr <<'?' ;
			return 0 ;
		}
	}
	for (i=num.begin() ; i!=num.end(); ++i)
	{
		cout <<*i <<endl ;
	}
//*/	
}
