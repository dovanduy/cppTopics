#include <iostream>
#include<deque>
#include<algorithm>  // http://www.cplusplus.com/reference/algorithm/
using namespace std;
// https://arena.maycamp.com/practice/get_problem_description?contest_id=28&problem_id=56
bool isNegative (int i) { return (i < 0); }
bool isZero (int i) { return (i == 0); }
bool isOne (int i) { return (i == 1); }

main()
{  // OK for small arithmetic
	long long n, 
		num, cntNeg, cntZero, cntOne, cntPos, num2, num3;
	long long	res = 0;
	deque<long long> c ;
	deque<long long>::iterator i;
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
	cntOne=count_if (c.begin(), c.end(), isOne) ;
	cntPos = c.size()-(cntNeg+cntZero+cntOne) ;
//	for (i=c.begin() ; i!=c.end(); ++i)
//	 cout <<(*i) <<' ' ;
//	cout <<endl<<"Neg="<<cntNeg<<"\tZero="<<cntZero<<"\tOne="<<cntOne<<"\tPos="<<cntPos<<endl;
	for ( ;cntNeg>1; )
	{
		num = c.front();
		c.pop_front();
		num2 = c.front();
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
		num = c.front();
		c.pop_front();
		num2 = c.front();
		c.pop_front();
		res+=num*num2;
		--cntNeg ;
		--cntZero ;
//		cout <<"\n1.res="<<res<<endl;
	}
	if (cntNeg == 1)
	{
		num = c.front();
		c.pop_front();
		res+=num;
		--cntNeg ;
//		cout <<"\n2.res="<<res<<endl;
	} ;
	for ( ;cntPos>2; )
	{
		num = c.back();
		c.pop_back();
		num2 = c.back();
		c.pop_back();
		num3 = c.back();
		c.pop_back();
		res+=num*num2*num3;
		cntPos = cntPos-3 ;
//		cout <<"\n3.res="<<res<<endl;
	} ;
	if (cntPos == 2)
	{
		num = c.back();
		c.pop_back();
		num2 = c.back();
		c.pop_back();
//		cout <<"\n4.res="<<num<<'\t'<<num2<<endl;
		res+=num*num2;
		cntPos = cntPos-2 ;
//		cout <<"\n5.res="<<res<<endl;
	} 
	if (cntPos == 1)
	{
		num = c.back();
		c.pop_back();
		res+=num;
		--cntPos ;
	} ;
	res+=cntOne ;
	cout <<res <<endl;
  	return 0 ;
}
