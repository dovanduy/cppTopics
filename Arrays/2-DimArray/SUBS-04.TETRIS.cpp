#include <iostream>
#include <string>
using namespace std;
// https://judge.softuni.bg/Contests/77/Programming-Basics-March-Lab

bool** gameField = NULL ; // empty array
short redove = 0, coloni = 0, row, col ;
string s;
int counterI=0, counterL=0, counterJ=0, counterO=0, counterZ=0, counterS=0, counterT=0 ;

void checkI (short r, short c)
{
	if (gameField[r][c] && gameField[r+1][c] && gameField[r+2][c] && gameField[r+3][c])
		counterI++ ;
}
void checkL (short r, short c)
{
	if (gameField[r][c] && gameField[r+1][c] && gameField[r+2][c] && gameField[r+2][c+1])
		counterL++ ;
}
void checkJ (short r, short c)
{
	if (gameField[r][c] && gameField[r+1][c] && gameField[r+2][c] && gameField[r+2][c-1])
		counterJ++ ;
}
void checkO (short r, short c)
{
	if (gameField[r][c] && gameField[r+1][c] && gameField[r+1][c+1] && gameField[r][c+1])
		counterO++ ;
}
void checkZ (short r, short c)
{
	if (gameField[r][c] && gameField[r][c+1] && gameField[r+1][c+1] && gameField[r+1][c+2])
		counterZ++ ;
}
void checkS (short r, short c)
{
	if (gameField[r+1][c] && gameField[r+1][c+1] && gameField[r][c+1] && gameField[r][c+2])
		counterS++ ;
}
void checkT (short r, short c)
{
	if (gameField[r][c] && gameField[r][c+1] && gameField[r+1][c+1] && gameField[r][c+2])
		counterT++ ;
}

main ()
{ // Dynamically Allocated 2 Dimensional Array.
	cin >>redove >>coloni ; // number of array components
	// And now to construct an array during runtime.
	gameField = new bool* [redove+4] ; // to allocate memory now.
	for (row=0; row<redove+4; row++)
		gameField[row] = new bool [coloni+4] ;
	for (row=0; row<redove+4; row++)
	  for (col=0; col<coloni+4; col++)
	  // DOUBLE Frame of falses  (empty cells) 
	  	gameField[row][col] = false ;
    
	for (row=2; row<redove+2; row++)
	  for (cin >>s, col=2; col<coloni+2; col++)
	  { // input data and set up a gameField
	  	if (s[col-2]=='o')
	  		gameField[row][col] = true ;
	  } ;

	for (row=2; row<redove+2; cout <<endl, row++)
	  for (col=2; col<coloni+2; col++)
	  {
	  	 //cout <<gameField[row][col] ;
	  	checkI(row, col) ;
	  	checkL(row, col) ;
	  	checkJ(row, col) ;
	  	checkO(row, col) ;
	  	checkZ(row, col) ;
	  	checkS(row, col) ;
	  	checkT(row, col) ;
	  }

	cout <<"I:"<<counterI <<", L:" <<counterL<<", J:" <<counterJ 
	<<", O:"<<counterO <<", Z:"<<counterZ <<", S:"<<counterS <<", T:"<<counterT;
///*	
	if (gameField != NULL) // if the array is not empty then
	{ 	// to get memory back as a free, re-usable memory.
		for (row=0; row<redove; row++)
			delete gameField[row] ;
		delete [] gameField ; // to reuse memory
		gameField = NULL ;	 // to reuse an array name 
	}	// After that we can re-allocate an array memory again.
//*/
}
