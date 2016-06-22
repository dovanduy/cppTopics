#include "infoArraysAPI.h"
template <class key>
class txtFilesDB : infoArraysAPI<key>
{
public:
	infoArrays::infoRecord getRecord(key id) ;
	infoArrays::infoRecord setRecord(key id) ;
	void printList() const ;
	infoArrays::infoRecord selectPerson() ;
private:
	infoArrays::infoRecord _myInf ;
} ;

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
