#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
/*
void printA (int num)
{
	printf (" %d", num) ;
}
//*/

vector<int> a;
int num, smetka, brKup4inki ;
vector<int>::iterator it ;
struct f {
	int brMoneti;
	int brKup4inki;
} ;

f current;
stack<f> b;

bool sortCond(int a, int b)
{ // reverse sorting condition
	return (a>b) ;
}

int main ()
{	
	for (scanf("%d", &num) ; !feof(stdin); scanf("%d", &num) )
	{
		a.push_back(num) ;
	} ;
	smetka=a.back() ;
	a.pop_back() ;
//	sort(a.begin(), a.end());
	sort(a.begin(), a.end(), sortCond) ; // reverse sorting
//	printf ("%d\n\n\n", smetka) ;
//	for_each(a.begin(), a.end(), printA) ;

//? a.size() == 1 || a.size() == 2
	for (brKup4inki=1, it=a.begin(); it != a.end()-1; ++it)
	{ // factorizacia po brMoneti, result => stack
		if (*it==*(it+1)) // *it == broiMoneti
		{
			brKup4inki++;
			if ((it+1) == (a.end()-1))
			{
				current.brKup4inki = brKup4inki;
				current.brMoneti = *it;
				b.push(current) ;
			}
		}
		else // *it != *(it+1)
		{
			current.brKup4inki = brKup4inki;
			current.brMoneti = *it;
			b.push(current) ;
			brKup4inki=1;
			if ((it+1)==(a.end()-1))
			{
				current.brKup4inki = brKup4inki;
				current.brMoneti = *(it+1);
				b.push(current) ; // add
			}
		}
	}

/*	
	while (!b.empty())
	{
		current = b.top() ;
		cout <<current.brKup4inki <<' ' <<current.brMoneti <<endl;
		b.pop() ;
	}
*/
	
	for (; ;)
	{
		current = b.top() ; // read
		if (b.size() > 1 && smetka > current.brKup4inki)
		{ // smetka > current.brKup4inki
			smetka = smetka - current.brKup4inki ;
			++current.brMoneti;
			b.pop() ; // delete
			if (b.top().brMoneti==current.brMoneti)
			{
				current.brKup4inki += b.top().brKup4inki ;
				b.pop(); // delete
				b.push(current) ;
			}
			else 
				b.push(current) ;
			if (1 == b.size() && 0 == smetka%current.brKup4inki)
			{
				printf ("%d\n", (smetka/current.brKup4inki+current.brMoneti)) ;
				return 0;
			}
			else if(1 == b.size())
			{
				printf ("%d\n", (smetka/current.brKup4inki+current.brMoneti-1)) ;
				return 0;
			}
		}
		else if(b.size() > 1 && smetka < current.brKup4inki)
		{
			printf ("%d\n", current.brMoneti) ;
			return 0;
		}
		else if(smetka == current.brKup4inki)
		{
			printf ("%d\n", (1+current.brMoneti)) ;
			return 0;
		}
	}
}
