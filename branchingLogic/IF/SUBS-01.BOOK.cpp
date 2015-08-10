// SUBS-01.BOOK.cpp
#include <iostream>
using namespace std;
int main()
{ // https://judge.softuni.bg/Contests/81/Programming-Basics-Exam-26-April-2015-Morning
	long long totalPages, campDays, pagesDayly,
		worksDays, totalPagesMonthly, totalMonths ;
	cin >>totalPages >>campDays >>pagesDayly;
	if (campDays == 30 || pagesDayly == 0)
	{
		cout <<"never" ;
		return 0 ;
	}
	
	worksDays	 =	30-campDays ;
	totalPagesMonthly = (worksDays*pagesDayly) ;
	totalMonths = totalPages/totalPagesMonthly +
	 			 ((0==totalPages%totalPagesMonthly) ? 0 : 1) ;

	cout <<totalMonths/12 <<" years " <<totalMonths%12 <<" months";
	return 0;
}
