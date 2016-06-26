#include <string>
#include <sstream>
template <class Type>
class MyStrings : public string
{
public:
	Type fromStringToNums (string intAsSring) {
	Type asInt = 0;
      stringstream ss;
      ss<<intAsSring;
      ss>>asInt; //convert string into int and store it in "asInt"
      ss.str(""); //clear the stringstream
      ss.clear(); //clear error flags
      //here asInt is an lon long int type now
	return asInt ;
	}
	
	bool isFileExist(const char* fileName)
	{	bool res;
    std::ifstream infile (fileName);
    res = infile.good() ;
    infile.close() ;
    return res;	}
    
    void goToNextLine()
	{
	if (std::cin.peek() == '\n') {
		std::cin.ignore(1 /*numeric_limits<streamsize>::max()*/, '\n');
		} 
	} ;
} ;
