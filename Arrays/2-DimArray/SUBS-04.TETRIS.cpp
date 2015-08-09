#include <iostream>
#include <string>
using namespace std;
// https://judge.softuni.bg/Contests/77/Programming-Basics-March-Lab

bool** gameField = NULL ; // empty array
short redove = 0, coloni = 0, row, col ;
string s;

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
	  	if (s[col]=='o')
	  		gameField[row][col] = true ;
	  } ;

	for (row=2; row<redove+2; row++, cout <<endl)
	  for (col=2; col<coloni+2; col++)
	  {
	  	// cout <<gameField[row][col] ; 
	  }

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
