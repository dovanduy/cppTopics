// SUBS-05.HalfByteSwapper.cpp
#include <iostream>

using hexNum = char [8] ;

using namespace std;

	int num [4],
		k, i, j, temp, power16, cmd[4] ;
	hexNum digitSet [4] ;
	char tmpCmd, tmpHexDig ;
	
char setHexDig (int dig)
{
		  switch (dig)
		  {
		  	case 15: return 'f' ; 
		  	case 14: return 'e' ; 
		  	case 13: return 'd' ;
		  	case 12: return 'c' ;
		  	case 11: return 'b' ;
		  	case 10: return 'a';
		  	default: return (char)('0'+dig) ;	
		  }
}

void printHexNum()
{
	for (k=0; k<4; k++)
	{
		for (i=7, temp=0, power16=1; i>=0; i--, power16=16*power16)
		  switch (digitSet[k][i])
		  {
		  	case 'f': temp += 15*power16 ; break; 
		  	case 'e': temp += 14*power16 ; break; 
		  	case 'd': temp += 13*power16 ; break;
		  	case 'c': temp += 12*power16 ; break;
		  	case 'b': temp += 11*power16 ; break;
		  	case 'a': temp += 10*power16 ; break;
		  	default:  temp += (digitSet[k][i]-'0')*power16 ; break ;	
		  }
		num[k] = temp ;
		cout <<num[k] <<endl;
		/*
		for (i=0; i<8; i++)
		  cout <<digitSet[k][i] ;
		cout <<endl ;*/
	}
}

void readNum()
{
		for(k=0; k<4; k++)
	{
		cin >>num [k] ;
		for (i=0 ; i<8; i++)
			digitSet[k][i] = '0' ;
		for (temp=num[k], i=7 ; temp>0 && i>=0; --i, temp=temp/16)
			digitSet[k][i] = setHexDig (temp%16) ;
	}
}

main ()
{ // The Half Byte (4 bits) equals to an HexaDecimal digit. 
	readNum() ;

	for (cin>>tmpCmd; (tmpCmd>='0' && tmpCmd<='9') ; cin>>tmpCmd)
	{	// parse a current set of commands
		cmd[0] = tmpCmd - '0' ;
		for (k=1; k<4; k++)
			cin >>cmd[k] ;
		// to execute commands, i.e. to swap half bytes
		tmpHexDig = digitSet[cmd[0]][7-cmd[1]] ;
		digitSet[cmd[0]][7-cmd[1]] = digitSet[cmd[2]][7-cmd[3]] ;
		digitSet[cmd[2]][7-cmd[3]] =tmpHexDig ;
	} ;

	printHexNum() ;
}
