#include <map>
#include "Offer.h"
template <class key>
class CashDesk : public Offer <key>
{
private:
	key _total ;
	
	map <string, Offer<key>> itemsForSale ;
public:
	CashDesk() : _total(0)
	{
	}
} ;
