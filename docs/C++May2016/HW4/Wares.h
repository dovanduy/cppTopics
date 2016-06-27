#include <map>
#include "TxtFilesDB.h"
#include "MyStrings.h"
#define FILEITEMS "cvs-priceListView.dat"

template <class key>
class Wares : public MyStrings<key> // клас Стоки
{
private:
	static multimap <key, key> itemsForSale ;  // It is a price-list particularly
	key _currentStokaID, _currentPriceID, _temp, _prKey /* priceKey */ ;
	auto static _currentQuotation = itemsForSale.begin() ;
public:
	TxtFilesDB<key> * pWare, * pPrice ;	
		
	void printOfferList () {
	cout <<"\nOFFER ID\tWare ID\t\tPRICE\tWARE\n" ;
	for (auto i = itemsForSale.begin(); i != itemsForSale.end(); ++i)
		{
			cout	<<((key)(*i).first) // ID-STOKa
					<<'-'
					<<((key)(*i).second) // ID-Price
					<<"\t\t" <<((key)(*i).first)
					<<"\t\t" <<pPrice->getDescription((key)(*i).second)  // Price
					<<'\t' <<(pWare->getRecord((*i).first))._description // STOKA spec
				<<endl ; 
		};
	} ;
	
	infoArrays::quotation<key> getNextQuotation()
	{
		infoArrays::quotation<key> result ;
		if (_currentQuotation != NULL)
		{	result._idStoka = _currentQuotation->first ;
			result._idPrice = _currentQuotation->second ;
			++_currentQuotation ;
		}
		else
		{	result._idStoka = -1 ;
			result._idPrice = -1 ;
		} ;
		return result ; 
	}
	
	void setSpecialPriceForItem(key idWare)
	{ // To be set a NEW price for a CHOSEN trade item.
		itemsForSale.insert(pair<key, key>(idWare, pPrice->setNewRecord()._id));
	}
	
/*	void selectOffer ()
	{
		string izbor ;
		key idStoka ;
		printOfferList () ;  
		// Add a NEW Offer to the above list.
		cout <<endl<<NEWID <<'\t' <<"To change the price of an item, by inputting it's code.\n";
		cout <<"Select listed OFFER ID => " ;
		cin >>izbor ; MyStrings<key>::goToNextLine() ;
		if (MyStrings<key>::fromStringToNums(izbor) == -1)
		{
			cout <<"Enter Ware ID => ";
			cin >>idStoka ; MyStrings<key>::goToNextLine() ;
			setSpecialPriceForItem(idStoka) ;
		}
		else {
		}
	} */
		
	Wares ()
	{
		pWare = 
			new TxtFilesDB<key> ("Ware Names: ", "csv-wares.dat") ;
		if (pWare == NULL)
		{
			cerr <<"Not enough memory, pWare." ;
		} ;
		pPrice = 
			new TxtFilesDB<key> ("How much money? ", "csv-prices.dat") ;
		if (pPrice == NULL)
		{
			cerr <<"Not enough memory, pPrice." ;
		} ;
		if (! MyStrings<key>::isFileExist(FILEITEMS))
		{ // To follow STOKI info keys and to set-up a 1st Price Lis
		  // to init csv-*.dat you can use txtFilesDB.cpp
			for (_temp=pWare->begin(); _temp != pWare->end(); _temp=pWare->getNextKey())
			{ // we asume that the same id is for both Ware and Price
				itemsForSale.insert(pair<key, key>(_temp, pPrice->getRecord(_temp)._id));
			} ;
		}
		else
		{ // to read from file to priceList, multiMap
			char skipDelimiter ;
			ifstream ifil (FILEITEMS) ;
			while ( ifil >>_temp	>>skipDelimiter	>>_prKey )
			{ // READS ifil until eof !!!
				itemsForSale.insert(pair<key, key>(_temp, _prKey)); // (idStoka, idPrice)
			} ;
			/*
			while (true) {
    			ifil >>_temp	>>skipDelimiter	>>_prKey ;
    			if (ifil.eof()) break ;
				itemsForSale.insert(pair<key, key>(_temp, _prKey)); // (idStoka, idPrice)
 			} ; // while
 			*/
 			ifil.close() ;
		} ;
		_currentQuotation = itemsForSale.begin() ;
	} ;
	
	~Wares ()
	{
		// to write a map into file.dat and to close(file.dat)
		fstream of (FILEITEMS, fstream::trunc | fstream::out);
		for (auto i = itemsForSale.begin(); i != itemsForSale.end(); ++i)
		{
			of  <<(*i).first //<<'\t' // ID-Stoka
				<<DELIMITER
				<<(*i).second <<endl ; // ID-Price
		};
		of.close() ; delete pWare; delete pPrice;
	} ;

} ;
