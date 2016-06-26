#include <map>
#include "TxtFilesDB.h"
#include "MyStrings.h"
#define FILEITEMS "cvs-priceListView.dat"

template <class key>
class Wares : public MyStrings<key> // клас Стоки
{
private:

//	TxtFilesDB<key> Price ("How much money? ", "csv-prices.dat") ;
//	TxtFilesDB<key> Ware ("Ware Names: ", "csv-wares.dat") ;
	multimap <key, key> itemsForSale ;  // It is a price-list particularly
	key _temp, _prKey ;
public:
	TxtFilesDB<key> * pWare, * pPrice ;	
	bool isWare (string intAsSring) {
		return pWare->isKeyHere(MyStrings<key>::fromStringToNums(_temp)) ;
	};
	
		
	void printOfferList () {
	cout <<"\nOFFER ID\tWare ID\t\tPRICE\tWARE\n" ;
	for (auto i = itemsForSale.begin(); i != itemsForSale.end(); ++i)
		{
			cout	<<((key)(*i).first) // ID-STOKa
					<<((key)(*i).second) // ID-Price
					<<"\t\t" <<((key)(*i).first)
					<<"\t\t" <<pPrice->getDescription((key)(*i).second)  // Price
					<<'\t' <<(pWare->getRecord((*i).first))._description // STOKA spec
				<<endl ; 
		};
	} ;
	
	void selectOffer ()
	{
		string izbor ;
		printOfferList () ;
		cout <<endl<<NEWID <<'\t' <<"Add a NEW Offer to the above list.\n";
		cout <<"Select listed OFFER ID =>" ;
		cin >>izbor ;
		if (MyStrings<key>::fromStringToNums(izbor) == -1)
		{
		}
		else {
		}
	}
	
	Wares ()
	{
		pWare = 
			new TxtFilesDB<key> ("Ware Names: ", "csv-wares.dat") ;
		if (pWare == NULL)
		{
			cerr <<"Not enough memory, pWare." ;
//			exit 1 ;
		} ;
		pPrice = 
			new TxtFilesDB<key> ("How much money? ", "csv-prices.dat") ;
		if (pPrice == NULL)
		{
			cerr <<"Not enough memory, pPrice." ;
//			return 2 ;
		} ;
		if (! MyStrings<key>::isFileExist(FILEITEMS))
		{ // To follow STOKI info keys and to set-up a 1st Price Lis
		  // to init csv-*.dat you can use txtFilesDB.cpp
			for (_temp=pWare->begin(); _temp != pWare->end(); _temp=pWare->getNextKey())
			{ // we asume that the same id is for both Ware and Price
				cout <<endl <<_temp <<'\t' <<(pPrice->getRecord(_temp)._id) <<endl;
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
		}	
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
