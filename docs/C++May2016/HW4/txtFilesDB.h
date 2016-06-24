#include "infoArraysAPI.h"
#include <map>
#include <fstream>
#define MYFILE "data.dat"
#define NEWPERSONID -1
using namespace std;
template <class key>
class txtFilesDB : public infoArraysAPI<key>
{
private:
	infoArrays::infoRecord _myInf ;
	key _lastID ;
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
		ifstream ifil (str.c_str()) ;
		ifil >>_lastID ;
		while (!ifil.eof()) {
    		ifil >>_myInf._id ;
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
	txtFilesDB (string infoHints, string f=MYFILE) : _infoHints(infoHints), _myFile(f) {
		initDB (f) ;
	} ;
	
	~txtFilesDB () {
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
			cout  <<((int)((*i).first)) <<'\t' // ID
				<<((*i).second) <<endl ; // description 
		};
};
	
infoArrays::infoRecord selectRecord() {
	key izbor;
	printList() ;
	cout <<endl<<NEWPERSONID <<'\t' <<"Add a NEW Person to the above list.\n";
	cout <<"Select listed ID =>" ;
	cin >>izbor ; goToNextLine() ;
	if (izbor==NEWPERSONID)
		return setNewRecord() ;
	else
		return getRecord(izbor) ;
	};
} ;

//*

//*/

/*
template <class T>
void txtFilesDB<T>::printList() const {
};

template <class T>
infoArrays::infoRecord txtFilesDB<T>::selectPerson() {
};
*/
