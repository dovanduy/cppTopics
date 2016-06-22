#include <string>
#include <fstream>

namespace infoArrays {
typedef unsigned int ID;

bool isFileExist(const char* fileName)
{	bool res;
    std::ifstream infile (fileName);
    res = infile.good() ;
    infile.close() ;
    return res;	}

struct infoRecord
  {	ID _id ; // unique
	std::string _description ;
  } ;
} ;

template <class key>
class infoArraysAPI // abstract class
{ // DEFs placed into an infoArraysAPI
public:
	virtual infoArrays::infoRecord getRecord(key id) = 0  ;
	virtual infoArrays::infoRecord setNewRecord() = 0 ;
	virtual void printList() // ?? ptr in txtFilesDB
	{
	};
	virtual infoArrays::infoRecord selectPerson() = 0 ;
} ;
