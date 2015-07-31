#include<iostream>
using namespace std;
main()
{
	long myTicket, num1, num2;
	cin >>myTicket;
	num1=(myTicket/10000)*10+myTicket%10;
	num2=(myTicket%10000)/10;
	if (0==num1 || num2%num1!=0)
		cout <<"Sorry";
	else
		cout <<"Yes"<<endl<<(num2/num1);
}
