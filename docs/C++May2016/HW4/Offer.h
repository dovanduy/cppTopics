#include "Wares.h"
template <class key>
class Offer : public Wares<key>
	{
		private:
			key _stokaID, _priceID ;
		
		Offer (key stokaID=-1, key priceID=-1)
		{
			_stokaID = stokaID ;
			_priceID = priceID ;
		}
		
		key getStoka()
		{
			return _stokaID ;
		} ;
		
		key getPrice()
		{
			return _priceID ;
		}
	} ;
