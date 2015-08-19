// B-JA-2009-3.MONETI_ver1.cpp
// https://arena.maycamp.com/practice/get_problem_description?contest_id=28&problem_id=54
#include <iostream>
using namespace std;

short k, i, t, resCounter, r1, num ;
const short fake [2] = {-1, 1} ;
/*
unsigned short gr11, gr12,
	  gr21, gr22,
	  gr31, gr32;
*/
unsigned short gr[3][2] ;
char r2, op[3] ;
bool r[3] ;
union masiv {
	short s [3] [2] ;
	short sumi [3*2] ;
};
masiv sum ;
/*
short
		sum11,	sum12, 
		sum21,	sum22,
		sum31,	sum32 ;
*/
bool checkHalfByte(unsigned short gr, short k)
{
	return ((gr&0xF) == k || ((gr>>4)&0xF) == k || ((gr>>8)&0xF) == k || ((gr>>12)&0xF) == k) ;
}

void check (int row)
{
	if (checkHalfByte(gr[row][0], k))
			{
				sum.s[row][0]=fake[i];
			}
			if (checkHalfByte(gr[row][1], k))
			{
				sum.s[row][1]=fake[i];
			}
			switch (op[row])
			{
				case '<':  r[row] = (sum.s[row][0] <  sum.s[row][1]) ; break ;
				case '>':  r[row] = (sum.s[row][0] >  sum.s[row][1]) ; break ;
				case '=':  r[row] = (sum.s[row][0] == sum.s[row][1]) ; break ;
			}
}

int main ()
{
// 2Byte == sizeof(unsigneg short)
// input
	for (k=0; k<3; k++)
	{
		for (t=0; t<4; t++)
		{
			cin >>num ;
			gr[k][0] += (num<<(t*4)) ;	
		} ;
		cin >>op[k] ;
		for (t=0; t<4; t++)
		{
			cin >>num ;
			gr[k][1] += (num<<(t*4)) ;	
		} ;		
	} ;
/*
	for (k=0, gr11=0; k<4; k++) {
	cin >>num;
	gr11 += (num<<(k*4)) ;}
	cin >>op[0] ;
	for (k=0, gr12=0; k<4; k++) {
	cin >>num;
	gr12  += (num<<(k*4))  ;}
	
	for (k=0; k<4; k++) {
	cin >>num;
	gr21 += (num<<(k*4))  ;}
	cin >>op[1] ;
	for (k=0; k<4; k++) {
	cin >>num;
	gr22 += (num<<(k*4))  ;}

	for (k=0; k<4; k++) {
	cin >>num;
	gr31 += (num<<(k*4))  ;}
	cin >>op[2] ;
	for (k=0; k<4; k++) {
	cin >>num;
	gr32  += (num<<(k*4)) ;}
*/
  for (resCounter=i=0; i<2; i++)	
	for (k=1; resCounter<2 && k<13; k++)
	{
		for (t=0; t<3*2; t++) sum.sumi[t] = 0 ;
		for (t=0; t<3; t++) check (t) ;
			//check (0) ;
			/*
			if (checkHalfByte(gr[0][0], k))
			{
				sum.s[0][0]=fake[i];
			}
			if (checkHalfByte(gr[0][1], k))
			{
				sum.s[0][1]=fake[i];
			}
			switch (op[0])
			{
				case '<':  r[0] = (sum.s[0][0]<sum.s[0][1]) ; break ;
				case '>':  r[0] = (sum.s[0][0]>sum.s[0][1]) ; break ;
				case '=':  r[0] = (sum.s[0][0] == sum.s[0][1]) ; break ;
			}
			*/
			//check (1) ;
			/*
			if (checkHalfByte(gr[1][0], k))
			{
				sum.s[1][0]=fake[i];
			}
			if (checkHalfByte(gr[1][1], k))
			{
				sum.s[1][1]=fake[i];
			}
			switch (op[1])
			{
				case '<':  r[1] = (sum.s[1][0]<sum.s[1][1]) ; break ;
				case '>':  r[1] = (sum.s[1][0]>sum.s[1][1]) ; break ;
				case '=':  r[1] = (sum.s[1][0] == sum.s[1][1]) ; break ;
			}
			*/
			//check (2) ;
			/*
			if (checkHalfByte(gr[2][0], k))
			{
				sum.s[2][0]=fake[i];
			}
			if (checkHalfByte(gr[2][1], k))
			{
				sum.s[2][1]=fake[i];
			}
			switch (op[2])
			{
				case '<':  r[2] = (sum.s[2][0]<sum.s[2][1]) ; break ;
				case '>':  r[2] = (sum.s[2][0]>sum.s[2][1]) ; break ;
				case '=':  r[2] = (sum.s[2][0] == sum.s[2][1]) ; break ;
			}
			*/
		 ;
//		cout <<"\nk="<<k<<"\ti="<<i<<"===\t"<<r[0]<<'\t'<<r[1]<<'\t'<<r[2]<<endl ;
		if (r[0]&&r[1]&&r[2])
		{
			if (0==resCounter)
			{
				r1=k ;
				if (fake[i]&1)
					r2='+' ;
				else
					r2='-' ;
			} ;
			resCounter++ ;
		}
	}
	if (0 == resCounter)
		cout <<"impossible";
	else if (resCounter>1)
		cout <<"indefinite";
	else
		cout <<r1<<r2;
	return 0 ;
}
