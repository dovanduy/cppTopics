#include <map>
#include <TxtFilesDB.h>
#include <MyStrings.h>
#define FILEITEMS "priceList.dat"
const char DELIMITER = ',' ;
template <class key>
class Wares : myStrings // клас Стоки
{
private:
	TxtFilesDB<key> Ware ("Ware Names: ", "cvs-wares.dat") ;
	TxtFilesDB<key> Price ("How much money? ", "csv-prices.dat") ;
	multimap <key, key> itemsForSale ;  // It is a price-list particularly
	key _temp, _prKey ;
public:
	bool isWare (string intAsSring) {
		return Ware.isKeyHere(myStrings::fromStringToLongLong(intAsString)) ;
	};
	
	Wares ()
	{
		if (! MyStrings::isFileExist(FILEITEMS))
		{ // To follow STOKI info keys and to set-up a 1st Price Lis
		  // to init csv-*.dat you can use txtFilesDB.cpp
			for (_temp=Ware.begin(); _temp != Ware.end(); _temp=Ware.getNextKey())
			{ // we asume that the same id is for both Ware and Price
				itemsForSale.insert(pair<key, key>(_temp, Price.getRecord(_temp)._id));
			}
		}
		else
		{ // to read from file to priceList, multiMap
			char skipDelimiter ;
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
			of  <<(*i).first //<<'\t' // ID
				<<DELIMITER
				<<(*i).second <<endl ; // name
		};
		of.close() ;
	} ;
	
	void printList ()
	{
		
	} ;
} ;
