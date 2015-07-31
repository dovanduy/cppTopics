#include <iostream>
#include <locale>
#include <windows.h>
#include <string>

std::string from_DOS(std::string DOS_string)
{    
   char buf[1000000];   
   OemToCharA(DOS_string.c_str(), buf);
   return buf;
}
 
int main ()
{
    setlocale( LC_ALL,"bulgarian" );
    std::string s;
    std::cin >> s;
    s = from_DOS(s);
    std::cout << s;
    system("pause");
  return 0;
}
