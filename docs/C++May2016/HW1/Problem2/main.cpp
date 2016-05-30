#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

const int MENUSIZE=10 ;
const int MAXU4ENICI = 10 ;
const int MAXOCENKI = 5 ;

string menu[MENUSIZE] =
{
	"\n0. Exit",
	"1. Data Entry",
	"2. Add Data",
	"3. Update",
	"4. Print",
	"5. Delete",
	"6. Search record by Num field to print Class Average",
	"7. Search record by Name as a string field",
	"8. Search by Min Student, Max Student, Class Average",
	"9. Report sorted by Names"
} ;

struct Student
{
	string name ;
	int ocenka [MAXOCENKI] ;
	double ave ; // studentAverage
	bool isDel ;
} ;

void printMenu ()
{
	for (int i = 0; i<MENUSIZE; ++i)
	cout <<menu[i] <<endl;
}

Student u4enici [MAXU4ENICI] ; // array of struct

char getMenu ()
{
	char reply ;
	do
	{
		printMenu();
		cin>>reply;
		if (reply>='0' && reply<='9')
			return reply ;
		else
			cerr  <<"\nValid choice is [0,9]\n" ;		
	}
	while (reply) ;
}

void dataEntry()
{
	int nStudents, i, k ;
//	cout <<"=== dataEntry\n" ;
	cout <<"\nHow many students?";
	cin >>nStudents;               
		for (i=0 ; i<nStudents && i<MAXU4ENICI; ++i)
		{
			cout <<"\n\tName: ";
			cin >>u4enici[i].name ;
			u4enici[i].ave=0;
			for (k=0; k<MAXOCENKI; ++k)
				{
					cout <<"\n\tOcenka:";
					cin >>u4enici[i].ocenka[k];
					u4enici[i].ave += u4enici[i].ocenka[k] ;
					if (u4enici[i].ocenka[k] == 0)
					{
				  		for (int k1=k+1 ; k1<MAXOCENKI; ++k1)
				  		u4enici[i].ocenka[k1] = 0 ;
				  	break ;
					}
				};
			if (k!=0)
				u4enici[i].ave=u4enici[i].ave/k;
		}
}

void addData()
{
//	cout <<"=== adddata\n" ;

	int freeInd, nStudents, i, k;
	for (freeInd=0; freeInd<MAXU4ENICI && u4enici[freeInd].name != ""; freeInd++) ;
	if (freeInd>(MAXOCENKI-1))
		cout <<"Array Overflow" ;
	else
	{
		cout <<"\nHow many students [1," <<(MAXU4ENICI-freeInd) <<"]?" ;
		cin >>nStudents;
		if ( !(nStudents>=1 && nStudents<=MAXU4ENICI-freeInd))
		{
			cerr <<"\nWrong reply ...\n";
			return ;
		}
		for (i=freeInd ; i<freeInd+nStudents && i<MAXU4ENICI; ++i)
		{
			cout <<"\n\tName: ";
			cin >>u4enici[i].name ;
			// ERR
			u4enici[i].ave=0;
			for (k=0; k<MAXOCENKI; ++k)
				{
					cout <<"\n\tOcenka:";
					cin >>u4enici[i].ocenka[k];
					u4enici[i].ave += u4enici[i].ocenka[k] ;
					if (u4enici[i].ocenka[k] == 0)
					{
				  		for (int k1=k+1 ; k1<MAXOCENKI; ++k1)
				  		u4enici[i].ocenka[k1] = 0 ;
				  	break ;
					}
				};
			if (k!=0)
				u4enici[i].ave=u4enici[i].ave/k;
		}
	}

}

void update()
{
	string myName;
	int indName, k ;
	cout <<"UPDATE functionality\n" ;
	cout <<"Name? " ; cin >>myName;
	for (indName=0; indName<MAXU4ENICI 
					&& (u4enici[indName].name != myName
						|| (u4enici[indName].name == myName
// to skip deleted records with same name
							&& u4enici[indName].isDel)
						)
					; ++indName) ;
					
	if (indName>=MAXU4ENICI-1)
	{
		cout <<"\n"<<myName <<" is not found, sorry.\n";
		return ;
	}
	cout <<"\n" <<u4enici[indName].name 
			<<"\t marks are as follows: " ;
	for (int k=0; k<MAXOCENKI; ++k)
		if (u4enici[indName].ocenka[k]==0)
		  	break;
		else
		  	cout <<"\t" <<u4enici[indName].ocenka[k];
	// TO ENTER A NEW MARK SET AGAIN
	u4enici[indName].ave=0;
	for (k=0; k<MAXOCENKI; ++k)
		{
			cout <<"\n\tOcenka:";
			cin >>u4enici[indName].ocenka[k];
			u4enici[indName].ave += u4enici[indName].ocenka[k] ;
			if (u4enici[indName].ocenka[k] == 0)
			{
		  		for (int k1=k+1 ; k1<MAXOCENKI; ++k1)
		  		u4enici[indName].ocenka[k1] = 0 ;
		  	break ;
			}
		};
		if (k!=0)
		u4enici[indName].ave=u4enici[indName].ave/k;
}

void print()
{ // HW
	double out;
	cout <<"NAME\tAverage\tOCENKI" ;
	for (int i=0; i<MAXU4ENICI; ++i)
	if (u4enici[i].name == "")
//		break;
	continue; // to skip that record
	else if (false == u4enici[i].isDel)
	{
		out = trunc(u4enici[i].ave) ;
		out += (((int)(trunc(100*u4enici[i].ave)))%100)/100.0 ;
		cout <<"\n" <<u4enici[i].name 
			<<"\t" //<<u4enici[i].ave // <<endl
			<<out 
			;
		for (int k=0; k<MAXOCENKI; ++k)
		  if (u4enici[i].ocenka[k]==0)
		  	break;
		  else
		  	cout <<"\t" <<u4enici[i].ocenka[k];
	}
}

void del()
{ // Virtual DELETED only
	cout <<"=== del\n" ;
	int i;
	string myName;
	cout <<"Name? " ; cin >>myName;
	for (i=0; i<MAXU4ENICI && myName != u4enici[i].name; ++i) ;
	if (i>=MAXU4ENICI)
		cerr <<"There is not " <<myName <<"\n";
	else // successfull search by Name
		{
			cout <<myName <<" deleted.\n";
			u4enici[i].isDel = true ;
		}
}

void searchByNum()
{
	double uspehNaKlasa = 0. ;
	double countStudents = 0. ;
//	cout <<"=== searchByNum\n" ;
	for (int i=0; i<MAXU4ENICI; ++i)
	if (u4enici[i].isDel != true // not deleted
		&& u4enici[i].name != "") // not Empty record
	{
		uspehNaKlasa += u4enici[i].ave;
		++countStudents ;
	}
	if (countStudents>0)
		cout <<"Class Average is " <<(uspehNaKlasa/countStudents) ;
	else
		cout <<"The class is empty.";
	cout <<endl;
}

void searchByString()
{ // find a data about student named X
	int i;
	cout <<"=== searchByString\n" ;
	string X; // X is a student name
	cout <<"Name? " ; cin >>X;
	for (i=0; 	i<MAXU4ENICI
				; ++i)
	if ((u4enici[i].isDel) && (X == u4enici[i].name))
		{// to skip already deleted records
			continue ;
		}
	else if (X == u4enici[i].name)
	{ // The search is OK
		cout <<"NAME\tAverage\tOCENKI" ;
		cout <<"\n" <<u4enici[i].name 
			<<"\t" <<u4enici[i].ave ;
		for (int k=0; k<MAXOCENKI; ++k)
		  if (u4enici[i].ocenka[k]==0)
		  	break;
		  else
		  	cout <<"\t" <<u4enici[i].ocenka[k];
		break ;
	}
	if (i>=MAXU4ENICI)
		cerr <<"\tThere is not " <<X;
	cout <<"\n" ;
}

void searchByMinMaxAve()
{
//	cout <<"=== searchByMinMaxAve\n" ;
	double uspehNaKlasa = 0. ;
	double countStudents = 0. ;
	double maxAveUspeh = 2.0 ;
	double minAveUspeh = 6.0 ;
	for (int i=0; i<MAXU4ENICI; ++i)
	if (u4enici[i].isDel != true // not deleted
		&& u4enici[i].name != "") // not Empty record
	{
		uspehNaKlasa += u4enici[i].ave;
		++countStudents ;
		if (u4enici[i].ave>maxAveUspeh)
			maxAveUspeh=u4enici[i].ave;
		if (u4enici[i].ave<minAveUspeh)
			minAveUspeh=u4enici[i].ave;
	}
	if (countStudents>0)
		cout 
	<<"\nUspeh range: [" <<minAveUspeh <<", "<<maxAveUspeh 
	<<"]\nClass Average is " <<(uspehNaKlasa/countStudents);
	else
		cout <<"The class is empty.";
	cout <<endl;
}

bool nameSort (const Student &a, const Student &b)
// Pointers as function arguments if we use a struct as parameter
{ 
	return (a.name<b.name) ;
}

void sortedReport()
{
	cout <<"STUDENT\'s LIST, sorted by Name\n" ;
	sort (u4enici, u4enici+MAXU4ENICI, nameSort) ; // Can be a &Function pointer also
	print ();
}

int main()
{
	char izbor ;
	cout<<"Dimitar P. Georgiev Xb klas" ;
	cout<<"\nApril 2016\n\n" ;
	cout <<"Problem Name\n" ;
	for ( ; ; ) //  infite loop
	{
		izbor = getMenu() ;
		switch (izbor)
		{
			case '0': { // terminate program
				return 0 ;
			}
			case '1': {
				dataEntry() ;
				break;
			}
			case '2': {
				addData() ;
				break;
			}
			case '3': {
				update() ;
				break;
			}
			case '4': {
				print() ;
				break;
			}
			case '5': {
				del() ;
				break;
			}
			case '6': {
				searchByNum() ;
				break;
			}
			case '7': {
				searchByString() ;
				break;
			}
			case '8': {
				searchByMinMaxAve() ;
				break;
			}
			case '9': {
				sortedReport() ;
				break;
			}	
		} // switch
	} // for
}
