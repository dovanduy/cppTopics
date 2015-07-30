/*	STL Stack example. Palindrome problem:
	Да се провери дали дадено цяло число е палиндром.

	Ако палиндрома се презапише с преподреждане за
	цифрите му в обратен ред, то резултатът е същия.

	ПРЕМЕНИЛ СЕ ИЛИЯ И СЕ ПОГЛЕДНАЛ ПАК В ТИЯ.

	Примерен ВХОД ИЗХОД			ВХОД ИЗХОД
				0	Yes		  	   5 Yes
			   11	Yes			 707 Yes
			  221	No			 242 Yes
			 -444	Yes			  56 No
			 8668	Yes			2333 No
			 1234 	No			 321 No
		123456789	No	   123494321 Yes 
*/
#include <iostream>
#include <stack> // STL stack library
using namespace std;
main ()
{	// Is an int num a palindrom?
	long int num, temp;
	short int currentDigit ;
	bool isPalindrome ;
	stack <short int> digits ; // stack declaration
	cin >>num ;
	temp = num ; // to init a do loop
	do // every num has at least one digit
	{
		currentDigit = temp%10 ;
		digits.push(currentDigit) ; // writes to stack
		temp = temp/10 ; 	// cuts a last temp digit
	} while (temp%10 != 0) ; // are there digits still?
	
	temp = num ; // gets an original value from num
	while (! digits.empty()) // non empty stack
	{
		temp = digits.top(); // gets a stack element
		digits.pop() ; // deletes a stack element
		currentDigit = num % 10 ;
		// And now a main check
		isPalindrome = temp == currentDigit ;
		if (! isPalindrome) // if it is not a palindrome
			break ; 	// then exits a loop immediately
		else
			num = num/10 ; // cuts a last digit
	} ;
	// And now to print a result
	if (isPalindrome)
		cout <<"YES, IT IS A PALINDROME." ;
	else
		cout <<"NO, IT IS NOT A PALINDROME." ;
}
/*	Home Work
	1. Is the word a palindrom?
	2. Is the float number a palindrom?
	3. Is the sentence a palindrom? 
	4. To find array based solutions.
*/
