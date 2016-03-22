#include <iostream>
using namespace std;
int main ()
{
	int d, m, g,
		d1, m1, g1 ;
	bool isVisokosna ;
	cin >>d >>m >>g ;
	g1 = g ;
	isVisokosna =	((g % 4 == 0) && (g % 100 != 0)) || 
					(g % 400 == 0) ;
	if (m==1 && d<31)
	{
		m1=m; d1=d+1;
	}
	else if (m==1 && d==31)
	{
		m1=2; d1=1;
	}
	else if (m==2 && d<28)
	{
		m1=2; d1=d+1;
	} 
	else if (m==2 && d==28 && isVisokosna)
	{
		m1=2; d1=29;
	}
	else if (m==2 && d==28 && ( ! isVisokosna))
	{
		m1=3; d1=1;
	}
	else if (m==2 && d==29 && isVisokosna)
	{
		m1=3; d1=1;
	}
	else if (m==3 && d<31)
	{
		m1=3; d1=d+1;
	}
	else if (m==3 && d==31)
	{
		m1=4; d1=1;
	}
	else if (m==4 && d<30)
	{
		m1=4; d1=d+1;
	}
	else if (m==4 && d==30)
	{
		m1=5; d1=1;
	}
	else if (m==5 && d<31)
	{
		m1=5; d1=d+1;
	}
	else if (m==5 && d==31)
	{
		m1=6; d=1;
	}
	else if (m==6 && d<30)
	{
		m1=6; d1=d+1;
	}
	else if (m==6 && d==30)
	{
		m1=7; d1=1;
	}
	else if (m==7 && d<31)
	{
		m1=7; d1=d+1;
	}
	else if (m==7 && d==31)
	{
		m1=8; d1=1;
	}
	else if (m==8 && d<31)
	{
		m1=8; d1=d+1;
	}
	else if (m==8 && d==31)
	{
		m1=9; d1=1;
	}
	else if (m==9 && d<30)
	{
		m1=9; d1=d+1;
	}
	else if (m==9 && d==30)
	{
		m1=10; d1=1;
	}
	else if (m==10 && d<31)
	{
		m1=10; d1=d+1 ;
	}
	else if (m==10 && d==31)
	{
		m1=11; d1=1;
	}
	else if (m==11 && d<30)
	{
		m1=11; d1=d+1;
	}
	else if (m==11 && d==30)
	{
		m1=12; d1=1;
	}
	else if (m==12 && d<31)
	{
		m1=12; d1=d+1;
	}
	else if (m==12 && d==31)
	{
		m1=1; d1=1; g1=g+1; 
	}
	else
		cout <<"Incorect date." <<d <<' ' <<m <<' ' <<g <<endl;
	cout <<d1 <<' ' <<m1 <<' ' <<g1;
	return 0;
}
