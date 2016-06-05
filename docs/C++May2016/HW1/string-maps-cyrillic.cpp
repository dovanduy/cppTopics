#include <iostream>
#include <map>
#include <string>
#include <ctype.h>
#include <locale>
#include <windows.h>
using namespace std;
string fromDos (string dosString)
{
	char buf[1000000] ;
	OemToCharA(dosString.c_str(), buf) ; // windows.h
	return buf ;
}

int main()
{
	setlocale (LC_ALL, "bulgarian") ;
    std::string UserInput = "";

    std::cout << "Please, input string >>";
    std::getline(std::cin,UserInput);
    UserInput = fromDos(UserInput) ;
    std::cout << "You Enter:" << UserInput;

    std::map<std::string,unsigned int> Counters;

    Counters["upper"] = 0;
    Counters["lower"] = 0;
    Counters["other"] = 0;

    unsigned int len = UserInput.length();

    for(unsigned int i=0;i<len;i++)
    {
      if ( islower(UserInput[i]) )
      {
         Counters["lower"]++;
      }
      else if ( isupper(UserInput[i]) )
      {
         Counters["upper"]++;
      }
      else
      {
          Counters["other"]++;
      }
    }

    std::cout << std::endl << "Uppers: " << Counters["upper"] << std::endl;
    std::cout << std::endl << "Lowers: " << Counters["lower"] << std::endl;
    std::cout << std::endl << "Other:" << Counters["other"] << std::endl;

    return 0;

}

