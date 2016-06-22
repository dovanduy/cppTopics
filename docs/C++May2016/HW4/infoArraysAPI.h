#include <string>

namespace infoArrays {
typedef unsigned int ID;

struct infoRecord
  {	ID _id ; // unique
	std::string _description ;
  } ;
} ;

template <class key>
class infoArraysAPI
{ // DEFs placed into an abstract class infoArraysAPI
public:
	virtual infoArrays::infoRecord getRecord(key id) = 0  ;
	virtual infoArrays::infoRecord setRecord(key id) = 0 ;
	virtual void printList() = 0 ;
	virtual infoArrays::infoRecord selectPerson() = 0 ;
} ;
