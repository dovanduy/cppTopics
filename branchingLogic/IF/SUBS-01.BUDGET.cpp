// SUBS-01.BUDGET.cpp
#include <iostream>
using namespace std;

const int NORMALWEEKDAYLV = 10 ;
const double GOESOUTPERCENT = 0.03 ;
const int NORMALWEEKENDSLVDAYLY = 20 ;
const int HOMETOWNWEEKENDSLVDAYLY = 0 ;
const int RENT = 150 ;

#define OK "Yes, leftover "
#define NOTOK "No, not enough "
#define EXACTLY "Exact Budget."
const char DOT = '.' ;

int main ()
{
	long 	n,
				expensesMonthly,
				expensesHomeTownWeekEnds, expensesNormalWeekEnds,
				expensesNormalWeekDay, expensesGoesOutWeekDay ; 
	int qtyOutWeekDays, qtyHomeTownWeekEnds,
		qtyNormalWeekDays, qtyNormalWeekEnds ;
	cin >>n >>qtyOutWeekDays >>qtyHomeTownWeekEnds ;
	qtyNormalWeekDays = 22 - qtyOutWeekDays ;
	qtyNormalWeekEnds = 4 -  qtyHomeTownWeekEnds ;
	
	expensesHomeTownWeekEnds = 2*qtyHomeTownWeekEnds*HOMETOWNWEEKENDSLVDAYLY ;
	expensesNormalWeekEnds = 2*qtyNormalWeekEnds*NORMALWEEKENDSLVDAYLY ;
	expensesNormalWeekDay = qtyNormalWeekDays*NORMALWEEKDAYLV ;
	expensesGoesOutWeekDay = qtyOutWeekDays*(NORMALWEEKDAYLV+(int)(n*GOESOUTPERCENT)) ;
	expensesMonthly = 	RENT + 
						(expensesNormalWeekEnds+expensesHomeTownWeekEnds) + 
						(expensesNormalWeekDay+expensesGoesOutWeekDay) ;
	if (expensesMonthly > n)
		cout <<NOTOK <<(expensesMonthly - n) <<DOT ;
	else if (n > expensesMonthly)
		cout <<OK <<(n - expensesMonthly) <<DOT;
	else
		cout <<EXACTLY ;
	return 0 ;
}
