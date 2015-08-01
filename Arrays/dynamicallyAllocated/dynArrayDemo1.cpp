#include <iostream>
using namespace std;
// look at https://www.youtube.com/watch?v=sLdO5D8f3s4
main ()
{ // Dynamically Allocated Array, no STL.
	double* dynamicArray = NULL ; // empty array
	long unsigned int arraySize = 0 ;
	const char DELIMITER = ' ';

	cin >>arraySize ; // number of array components
	// And now to construct an array during runtime.
	dynamicArray = new double [arraySize] ; // to allocate memory now.

	for (int i=0; i<arraySize; i++)
	{ // to init an array and after that to print a ready made component
		dynamicArray[i] = 2*i ; // it can be cin >>dynamicArray[i]
		cout <<dynamicArray[i] <<DELIMITER; // to print an array component now.
	}
	
	if (dynamicArray != NULL) // if the array is not empty then
	{ 	// to get memory back as a free, re-usable memory.
		delete [] dynamicArray ; // to reuse memory
		dynamicArray = NULL ;	 // to reuse an array name
		cout <<"\n\n=== The array was deleted yet. ===\n\n"; 
	}	// After that we can re-allocate an array memory again.
	
// Now we can reuse the same array as a memory and as an array name
	arraySize=10; // now the array has 10 components only
	// We can reserve array memory again, maybe the previous memory.
	dynamicArray = new double [arraySize] ;

	for (int i=0 ; i<arraySize; i++)
	{ // to init an array and after that to print a ready made component
		dynamicArray[i] = ((i & 1) ? 1 : -1) * 2*i ;
		cout <<dynamicArray[i] <<DELIMITER; // to print an array component now.
	} ;
	
	if (dynamicArray != NULL) // if the array is not empty then
	{ 	// to get memory back as a free, re-usable memory.
		delete [] dynamicArray ; 
		dynamicArray = NULL ; 
	}	// That manner of implemantation re-allocates an array 
	// memory AGAIN and AGAIN during a pass through our algorithm.
}
