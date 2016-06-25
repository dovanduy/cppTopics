#include "infoArraysAPI.h"
#include <map>
#include <fstream>
#include <iostream>
#define MYFILE "data.dat"
#define NEWID -1
const char DELIMITER = ',' ;
using namespace std;
template <class key>
class TxtFilesDB : public infoArraysAPI<key>
{
private:
	infoArrays::infoRecord _myInf ;
	key _lastID, _currentKey ;
	string _myFile, _infoHints ;
	std::map <key, string> myInfoRecords ;
	
	void initDB (string str=MYFILE){
	if (! infoArrays::isFileExist(str.c_str() ))
	{	// to creaty an empty file and close it immediately.
		_lastID=0 ;
		fstream of (str.c_str(), fstream::trunc | fstream::out);
		of <<_lastID ;
		of.close();
	}
	else
	{ // to INIT a MAP from a FILE
	// to READ a file into MAP
		char skipDelimiter ;
		ifstream ifil (str.c_str()) ;
		ifil >>_lastID ;
		while (!ifil.eof()) {
    		ifil >>_myInf._id ;
    		ifil >>skipDelimiter ;
			getline(ifil, _myInf._description ) ;
			myInfoRecords[_myInf._id] = _myInf._description ;
 		} // while
 		ifil.close() ;
	}
} ;

void writeToDB()
	{ // autoSave 15 min.
	// to write a map into file.dat and to close(file.dat)
	fstream of (_myFile.c_str(), fstream::trunc | fstream::out);
	of <<_lastID <<endl;
		for (auto i=myInfoRecords.begin(); i!=myInfoRecords.end(); ++i)
		{
			of  <<(*i).first //<<'\t' // ID
				<<DELIMITER
				<<(*i).second <<endl ; // name
		};
	of.close() ;
	} ;

protected:
void goToNextLine()
	{
	if (std::cin.peek() == '\n') {
		std::cin.ignore(1 /*numeric_limits<streamsize>::max()*/, '\n');
		} 
	} ;

public:
	TxtFilesDB (string infoHints, string f=MYFILE) : _infoHints(infoHints), _myFile(f) {
		initDB (f) ;
	} ;
	
	~TxtFilesDB () {
		writeToDB () ;
	} ;
	
	bool isKeyHere (key id)
	{
		if ( myInfoRecords.find(id) == myInfoRecords.end() ) {
  		return false ; // not found
	} else {
  		return true ; // found
	}	
	} ;
	
	key begin()
	{ // Goes to the BEGINNING and returs -1 or key as a number >=0
		auto i = myInfoRecords.begin() ;
		_currentKey = (key)(*i).first ;
		if (i != myInfoRecords.end())
			return (_currentKey) ;
		else return this->end() ;
	} ;

	key getNextKey()
	{ // Goes to the BEGINNING and returs -1 or key as a number >=0
		auto i = myInfoRecords.find(_currentKey) ;
		if (i == myInfoRecords.end())
			return this->end() ;
		else
		{
			++i ;
			if (i == myInfoRecords.end())
				return this->end() ;
			else 
				return ((key)(*i).first) ;
		}
	} ;
	
	key getCurrentKey()
	{
		return _currentKey ;
	}
	
	key end()
	{
		return (key)(-1) ; // -1 is not a valid key, ? return NULL
	}
	
infoArrays::infoRecord getRecord(key id) {
	_myInf._id = id ;
	_myInf._description = myInfoRecords[id] ; // at
	return _myInf ;	
};

infoArrays::infoRecord setNewRecord() { 
	_myInf._id = _lastID ;
	cout <<_infoHints ;
	goToNextLine() ;
	getline (cin, _myInf._description ) ;
	myInfoRecords[_myInf._id] = _myInf._description ;
	++_lastID;
	return _myInf ;	
};

void printList() {
		cout <<"\nID\t"<<_infoHints <<"\n---\t---\n";
	for (auto i=myInfoRecords.begin(); i != myInfoRecords.end(); ++i)
		{
			cout  <<((key)((*i).first)) <<'\t' // ID
				<<((*i).second) <<endl ; // description 
		};
};
	
infoArrays::infoRecord selectRecord() {
	key izbor;
	printList() ;
	cout <<endl<<NEWID <<'\t' <<"Add a NEW Row to the above list.\n";
	cout <<"Select listed ID =>" ;
	cin >>izbor ;
	if (izbor==NEWID)
		return setNewRecord() ;
	else
		return getRecord(izbor) ;
	};
} ;

