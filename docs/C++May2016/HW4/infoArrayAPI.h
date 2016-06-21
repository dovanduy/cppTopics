#include <string>

template <class key>
class infoArrayAPI
{ // DEFs placed into an abstract class
public:
	struct infoRecord
	{	key _id ; // unique
		std::string _description ;
	} ;
	virtual infoRecord getRecord(key id) = 0  ;
	virtual infoRecord setRecord(key id) = 0 ;
	virtual void printList() = 0 ;
} ;
