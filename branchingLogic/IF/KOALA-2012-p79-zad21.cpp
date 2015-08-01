/* Koala Press, 2012, page 79, problem 21*, Програмиране на C++, Коала Прес

Да се състави програма, която въвежда от клавиатурата три цели числа,
различни от нула. Програмата да извежда разликата 
между максималното четно число и минималното нечетно числа от тях. 
Ако въведените числа са само нечетни, да изведе минималното от тях. 
Ако са само четни - максималното от тях.

Inputs: 3 int non-zero numbers
Output:
	max(even) - max(odd)
	odd numbers only => min(3 nums)
	even numbers only => max(3 nums)

ВХОД			ИЗХОД
-36 54 11		43
13 -19 337		-19
12 -58 -14		12
*/
#include <iostream>
using namespace std;
main()
{
	int num1, num2, num3;
	bool oddNumsOnly, evenNumsOnly, isNum1Even, isNum2Even, isNum3Even;
	cin >>num1 >>num2 >>num3;
	isNum1Even = num1%2 == 0 ;
	isNum2Even = num2%2 == 0 ;
	isNum3Even = num3%2 == 0 ;
	oddNumsOnly = (! isNum1Even) && (! isNum2Even) && (! isNum3Even);
	evenNumsOnly = isNum1Even && isNum2Even && isNum3Even;
	if (oddNumsOnly && (num1<=num2 && num1<=num3))
		cout <<num1;
	else if (oddNumsOnly && (num2<=num3 && num2<=num1))
		cout <<num2;
	else if (oddNumsOnly && (num3<=num1 && num3<=num2))
		cout <<num3;
	else if (evenNumsOnly && (num2<=num1 && num3<=num1))
		cout <<num1;
	else if (evenNumsOnly && (num1<=num2 && num3<=num2))
		cout <<num2;
	else if (evenNumsOnly && (num1<=num3 && num2<=num3))
		cout <<num3;
	else if (isNum1Even && isNum2Even)
		cout <<((num1<num2?num2:num1) - num3);
	else if (isNum2Even && isNum3Even)
		cout <<((num3<num2?num2:num3) - num1);
	else if (isNum1Even && isNum3Even)
		cout <<((num1<num3?num3:num1) - num2);
	else if (! isNum1Even && ! isNum1Even)
		cout <<(num3 - (num1<num2?num1:num2));
	else if (! isNum2Even && ! isNum3Even)
		cout <<(num1 - (num3<num2?num3:num2));
	else if (! isNum1Even && isNum3Even)
		cout <<(num2 - (num1<num3?num1:num3));
	else cout <<"??? ERROR ???" ;
}
