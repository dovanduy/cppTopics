#include <iostream>
using namespace std;
main()	// Bubble Sort
{	const int arraySize = 5;
	double nums [arraySize], cup3;
	bool isSwap;
	for(int i=0; i<arraySize; i++) // Reads an array
		cin >>nums[i];
	do	// Bubble sort
	{	isSwap=false;
		for (int i=0; i<(arraySize-1); i++)
			if (nums[i]>nums[i+1])
			{	// to swap: nums[i] <=> nums[i+1]
				cup3=nums[i];
				nums[i]=nums[i+1];
				nums[i+1]=cup3;
				isSwap = true;
			}
	} while (isSwap) ;
	for(int i=0; i<arraySize; i++) // Writes an array
		cout <<nums[i] <<' ';
}
