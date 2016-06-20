// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string MyString;
	int UpperCount = 0;
	int LowerCount = 0;
	int OtherSymbol = 0;
	int length;
	cout << "Vyvedi niz:\n";
	getline(cin, MyString);
	length = MyString.length();
	for (int i = 0; i < length ; i++)
	{
		char c = MyString[i];
		if (islower(c))
		{
			LowerCount++;
		}
		else if (isupper(c))
		{
			UpperCount++;
		}

		else
		{
			OtherSymbol++;
		}
	}
	cout << "Malki Bukvi:" << LowerCount << "\n";
	cout << "Glavni Bukvi:" << UpperCount << "\n";
	cout << "Drugi Simvoli:" << OtherSymbol << "\n";

    return 0;
}

