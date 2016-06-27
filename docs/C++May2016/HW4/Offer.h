#include "Wares.h"
template <class key>
class Offer : public Wares<key>
{
private:
	key _stokaID, _priceID ;
	float _price ;
	string _quotID ;
	string makeQuotID(key stoka, key price)
	{
		return ( MyStrings<key>::fromDecNumToString(stoka) + "-" + MyStrings<key>::fromDecNumToString(price)) ;
	}
public:	
	Offer ()  
	{
		infoArrays::quotation<key> res ;
		res=Wares<key>::getNextQuotation() ;
		_stokaID = res._idStoka ;
		_priceID = res._idPrice ;
		if (_stokaID != -1)
		{
			_price = MyStrings<float>::fromStringToNums(Wares<key>::pPrice->getDescription(res._idPrice)) ;
			_quotID = makeQuotID(res._idStoka, res._idPrice) ;
		}
		else // No quot is avilable yet.
		{
			_price = 0 ;
			_quotID = "" ;
		}
	}
		
	key getStoka()
	{
		return _stokaID ;
	} ;
		
	key getPrice()
	{
		return _priceID ;
	}
	
	string getOfferID ()
	{
		return _quotID ;
	}
	
	void printOfferList()
	{
		Wares<key>::printOfferList() ;
	}
} ;
