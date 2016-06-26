#include <string>
#include <sstream>
template <class Type> // Type is valid C++ numeric type
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
	
	string fromDecNumToString (Type decNum) {
		string res;
		stringstream myStream ;
		myStream <<dec <<decNum ; // dec is a std::dec manipulator
		res = myStream.str() ;
		myStream.str(""); //clear the stringstream
      	myStream.clear(); //clear error flags
		return res ;
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
