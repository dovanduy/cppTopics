#include "infoArraysAPI.h"
#include <map>
#include <fstream>
#define MYFILE "data.dat"
using namespace std;
template <class key>
class txtFilesDB : public infoArraysAPI<key>
{
private:
	infoArrays::infoRecord _myInf ;
	key _lastID ;
	string _myFile ;
	std::map <key, infoArrays::infoRecord> myInfoRecords ;
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
			myInfoRecords[_myInf._id] = _myInf ;
 		} // while
 		ifil.close() ;
	}
} ;
public:
	txtFilesDB (string f) : _myFile(f) {
		initDB (f) ;
	} ;
	infoArrays::infoRecord getRecord(key id) {
		//cout <<"1";
	} ;
	infoArrays::infoRecord setRecord(key id) {
		//cout <<"2";
	};
	void printList() const { //cout <<"3" ;
	};
	infoArrays::infoRecord selectPerson() {
		//cout <<"4" ;
	};
} ;

/*
template <class T>
infoArrays::infoRecord txtFilesDB<T>::getRecord(T id) {
};

template <class T>
infoArrays::infoRecord txtFilesDB<T>::setRecord(T id) {
};

template <class T>
void txtFilesDB<T>::printList() const {
};

template <class T>
infoArrays::infoRecord txtFilesDB<T>::selectPerson() {
};
*/
