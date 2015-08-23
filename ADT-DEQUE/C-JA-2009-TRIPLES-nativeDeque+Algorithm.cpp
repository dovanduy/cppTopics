#include <iostream>
#include<deque>
#include<algorithm>  // http://www.cplusplus.com/reference/algorithm/
using namespace std;

bool isNegative (int i) { return (i < 0); }
bool isZero (int i) { return (i == 0); }

main()
{
	int n, 
		num, cntNeg, cntZero, cntPos, num2, num3,
		res = 0;
	deque<int> c ;
	deque<int>::iterator i;
	for (cin >>n ; n>0; --n)
	{
		cin >>num;
		if (num<0)
			c.push_front(num) ;
		else
			c.push_back(num) ;
	} ;
	sort (c.begin(), c.end()) ;
	cntNeg=count_if (c.begin(), c.end(), isNegative) ;
	cntZero=count_if (c.begin(), c.end(), isZero) ;
	cntPos = c.size()-(cntNeg+cntZero) ;
//	for (i=c.begin() ; i!=c.end(); ++i)
//	 cout <<(*i) <<' ' ;
//	cout <<endl<<"Neg="<<cntNeg<<"\tZero="<<cntZero<<"\tPos="<<cntPos<<endl;
	for ( ;cntNeg>1; )
	{
		num = *c.begin();
		c.pop_front();
		num2 = *c.begin();
		c.pop_front();
		// 2 + 1 = 3rd rule
		if (cntPos>0)
		{
			num3 = c.back() ;
			c.pop_back() ;
			--cntPos ;
		}
		else
		  num3 = 1 ;
		res+=num*num2*num3;
		cntNeg=cntNeg-2 ;
	} ;
	if (cntNeg==1 && cntZero != 0)
	{
		num = *c.begin();
		c.pop_front();
		num2 = *c.begin();
		c.pop_front();
		res+=num*num2;
		--cntNeg ;
		--cntZero ;
//		cout <<"\n1.res="<<res<<endl;
	}
	if (cntNeg == 1)
	{
		num = *c.begin();
		c.pop_front();
		res+=num;
		--cntNeg ;
//		cout <<"\n2.res="<<res<<endl;
	} ;
	for ( ;cntPos>2; )
	{
		num = *c.begin();
		c.pop_front();
		num2 = *c.begin();
		c.pop_front();
		num3 = *c.begin();
		c.pop_front();
		res+=num*num2*num3;
		cntPos = cntPos-2 ;
	} ;
	if (cntPos == 2)
	{
		num = *c.begin();
		c.pop_front();
		num2 = *c.begin();
		c.pop_front();
		res+=num*num2;
		cntPos = cntPos-2 ;
	} 
	if (cntPos == 1)
	{
		num = *c.begin();
		c.pop_front();
		res+=num;
		--cntPos ;
	} ;
	cout <<res <<endl;
  	return 0 ;
}
