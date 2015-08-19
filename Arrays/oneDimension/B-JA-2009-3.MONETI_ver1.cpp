// B-JA-2009-3.MONETI_ver1.cpp
// https://arena.maycamp.com/practice/get_problem_description?contest_id=28&problem_id=54
#include <iostream>
#include <string>
using namespace std;

int k, i ;
const int fake [2] = {-1, 1} ;
int gr11[4], gr12[4],
	gr21[4], gr22[4],
	gr31[4], gr32[4] ;
char op[3] ;
bool r[3] ;
double	sum11,	sum12, 
		sum21,	sum22,
		sum31,	sum32 ;
string res;

int main ()
{

// input
	for (k=0; k<4; k++) cin >>gr11[k];
	cin >>op[0] ;
	for (k=0; k<4; k++) cin >>gr12[k];
	
	for (k=0; k<4; k++) cin >>gr21[k];
	cin >>op[1] ;
	for (k=0; k<4; k++) cin >>gr22[k];

	for (k=0; k<4; k++) cin >>gr31[k];
	cin >>op[2] ;
	for (k=0; k<4; k++) cin >>gr32[k];
	for (res="", i=0; i<2; i++)	
	for (k=1; k<13; k++)
	{
		sum11=sum12=sum21=sum22=sum31=sum32 = 0;
		for (int t= 0; t<4; t++)
		{
			if (gr11[t] == k)
			{
				sum11=fake[i];
			}
			if (gr12[t] == k)
			{
				sum12=fake[i];
			}
			switch (op[0])
			{
				case '<':  r[0] = (sum11<sum12) ; break ;
				case '>':  r[0] = (sum11>sum12) ; break ;
				case '=':  r[0] = (sum11 == sum12) ; break ;
			}
			
			if (gr21[t] == k)
			{
				sum21=fake[i];
			}
			if (gr22[t] == k)
			{
				sum22=fake[i];
			}
			switch (op[1])
			{
				case '<':  r[1] = (sum21<sum22) ; break ;
				case '>':  r[1] = (sum21>sum22) ; break ;
				case '=':  r[1] = (sum21 == sum22) ; break ;
			}
			
			if (gr31[t] == k)
			{
				sum31=fake[i];
			}
			if (gr32[t] == k)
			{
				sum32=fake[i];
			}
			switch (op[2])
			{
				case '<':  r[2] = (sum31<sum32) ; break ;
				case '>':  r[2] = (sum31>sum32) ; break ;
				case '=':  r[2] = (sum31 == sum32) ; break ;
			}
		} ;
//		cout <<"\nk="<<k<<"\ti="<<i<<"===\t"<<r[0]<<'\t'<<r[1]<<'\t'<<r[2]<<endl ;
		if (r[0]&&r[1]&&r[2])
		{
			res.push_back((char)(k+'0')) ;
			if (fake[i] == 1)
				res.push_back('+') ;
			else
				res.push_back('-') ;
		}
	}
	if (res=="")
		cout <<"impossible";
	else if (res.length()>2)
		cout <<"indefinite";
	else
		cout <<res;
	return 0 ;
}
