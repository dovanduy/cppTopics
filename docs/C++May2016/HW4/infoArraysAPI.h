#include <string>

template <class key>
class infoArraysAPI
{ // DEFs placed into an abstract class infoArraysAPI
public:
	struct infoRecord
	{	key _id ; // unique
		std::string _description ;
	} ;
	virtual infoRecord getRecord(key id) = 0  ;
	virtual infoRecord setRecord(key id) = 0 ;
	virtual void printList() = 0 ;
} ;
