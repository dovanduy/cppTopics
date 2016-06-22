#include <iostream>
//#define BASE_INHERITANCE_TEST
using namespace std ;
#include "EduPersons.h"
const int MENUSIZE = 7 ;
string menu[MENUSIZE] = 
{
	"\n0. Exit",
	"1. Get	data for student with ID",
	"2. Get	data for teacher with ID",
	"3. Get	data for guest teacher with ID",
	"4. Add	data for new student",
	"5. Add	data for new teacher",
	"6. Add	data for new guest teacher"
} ;
char getMenu () ;
int main ()
{
char izbor ;
EduPersons* p = new EduPersons () ;
if (p==NULL)
{
	cout <<"\nNot enough RAM.\n";
	return 2;
}
for ( ; ; ) //  infite loop
	{
		izbor = getMenu() ;
		switch (izbor)
		{
			case '0': { // terminate program
				delete p ;
				cout <<"\nSuccessfuly closed :-)\n" ;
				return 0 ;
			}
			case '1': { // Get	data for student with ID
				p->getStudentByID () ;
				break;
			}
			case '2': { // Get	data for teacher with ID
				p->getTeacherByID () ;
				break;
			}
			case '3': { // Get	data for guest teacher with	ID
				p->getGuestTeacherByID () ;
				break;
			}
			case '4': { // Add	data for new student
				p->addNewStudent() ;
				break;
			}
			case '5': { // Add	data for new teacher
				p->addNewTeacher() ;
				break;
			}
			case '6': { // Add	data for new guest teacher
				p->addNewGuestTeacher() ;
				break;
			}
			default:{
				cout <<"\n\nBye Bye :(\n" ;
				delete p ;
				return 1;
			}
		} // switch
	} // for
}

void printMenu ()
{
	for (int i = 0; i<MENUSIZE; ++i)
	cout <<menu[i] <<endl;
}

char getMenu ()
{
	char reply ;
	do
	{
		printMenu();
		cin>>reply;
		if (reply>='0' && reply<='6')
			return reply ;
		else
			cerr  <<"\nValid choice is [0,6]\n" ;		
	}
	while (reply) ;
}
