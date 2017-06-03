#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef int lng ;
int main ()
{
	lng a, b, p, d, dig, i;
	vector <lng> s;
	int cntEq = 0;
//	cin >>a >>b >>p ;
	scanf("%d %d %d", &a, &b, &p);
	for (i=a; i<=b; ++i, s.clear())
	{
		d=i;
		do
		{
			dig = d%p ;
			if (count(s.begin(), s.end(), dig))
			{   ++cntEq;
				break ;
			}
			//s.insert((dig)) ;
			s.push_back(dig) ;
			d=d/p ;
		} while (d) ;
	} ;
//	cout <<(b-a+1-cntEq) ;
	d = b-a+1-cntEq ;
	printf("%d", d);
	return 0;
}
