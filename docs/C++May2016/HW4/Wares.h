#include <map>
#include "TxtFilesDB.h"
#include "MyStrings.h"
#define FILEITEMS "cvs-priceListView.dat"
//const char DELIMITER = ',' ;
template <class key>
class Wares : public MyStrings // клас Стоки
{
private:
	TxtFilesDB<key> * pWare, * pPrice ;	
//	TxtFilesDB<key> Price ("How much money? ", "csv-prices.dat") ;
//	TxtFilesDB<key> Ware ("Ware Names: ", "csv-wares.dat") ;
	multimap <key, key> itemsForSale ;  // It is a price-list particularly
	key _temp, _prKey ;
public:
	bool isWare (string intAsSring) {
		return pWare->isKeyHere(MyStrings::fromStringToLongLong(_temp)) ;
	};
	
		
	void printList ()
	{ cout <<"\n=== printList\n" <<(*itemsForSale.begin()).first <<'\t' <<(*itemsForSale.begin()).second <<'\t'
		 <<endl;
	for (auto i = itemsForSale.begin(); i != itemsForSale.end(); ++i)
		{
			string* str;
			cout  <<endl <<((key)(*i).first) <<endl;// ID-STOKa
			cout	<<'-' <<((key)(*i).second) <<endl;// ID-Price
			infoArrays::infoRecord r ;
			str=pPrice->getDescription((*i).second) ;
			cout	<<'\t' <<(*str) <<endl; // Price
			r=pWare->getRecord((*i).first) ;
			cout	<<'\t' <<r._description // STOKA spec
				<<endl ; 
		};
	} ;
	
	Wares ()
	{
		clog <<"1\n" ;
		TxtFilesDB<key> * pWare = 
		new TxtFilesDB<key> ("Ware Names: ", "csv-wares.dat") ;
		if (pWare == NULL)
		{
			cerr <<"Not enough memory, pWare." ;
//			exit 1 ;
		} ;
		clog <<"2\n" ;
		TxtFilesDB<key> * pPrice = 
			new TxtFilesDB<key> ("How much money? ", "csv-prices.dat") ;
		if (pPrice == NULL)
		{
			cerr <<"Not enough memory, pPrice." ;
//			return 2 ;
		} ;
		clog <<"3\n" ;
		if (! MyStrings::isFileExist(FILEITEMS))
		{ // To follow STOKI info keys and to set-up a 1st Price Lis
		  // to init csv-*.dat you can use txtFilesDB.cpp
		  clog <<"4\n" ;
			for (_temp=pWare->begin(); _temp != pWare->end(); _temp=pWare->getNextKey())
			{ // we asume that the same id is for both Ware and Price
				cout <<endl <<_temp <<'\t' <<(pPrice->getRecord(_temp)._id) <<endl;
				itemsForSale.insert(pair<key, key>(_temp, pPrice->getRecord(_temp)._id));
			} ;
		clog <<"\n4-end" ;
		}
		else
		{ // to read from file to priceList, multiMap
			char skipDelimiter ;
			clog<<"5\n";
			ifstream ifil (FILEITEMS) ;
			while (! ifil.eof()) {
    			ifil >>_temp	>>skipDelimiter	>>_prKey ;
				itemsForSale.insert(pair<key, key>(_temp, _prKey)); // (idStoka, idPrice)
 			} // while
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
