#include <string>
#include <sstream>
class MyStrings : public string
{
public:
	long long fromStringToLongLong (intAsSring) {
	long long asInt = 0;
      stringstream ss;
      ss<<intAsString;
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
} ;
