#include <iostream>
//#include <locale>
#include <windows.h>
using namespace std;
main()
{
	setlocale (LC_ALL, "bulgarian") ;
	char c;
	//#include <windows.h>
	//system("chcp 1251");
	//SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
	cout <<"\n\nÁÚËÃÀÐÑÊÈ ÒÅÊÑÒ Ñ cout?\t\t\t\t"
		 <<"HOW cout PRINTS BULGARIAN?\n\n\n"
	     <<"1. ÈÇÏÎËÇÂÀÌÅ ÁÈÁËÈÎÒÅÊÀÒÀ locale:\t\t"
		 <<"locale LIBRABY IS A MUST:\n\t\t\t"
		 <<"#include <locale>\n\n\n"
		 <<"2. ÇÀÄÀÂÀÌÅ ÍÎÂÈß ÅÇÈÊ:\t\t\t\t"
		 <<"TO SET UP A NEW LANGUAGE:\n\t\t\t" 
		 <<"setlocale (LC_ALL, \"bulgarian\") ;\n\n\n\t"
		 <<"The test is OK!\n\n";
	cin >>c ;
	cout <<c ;
}
