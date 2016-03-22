#include <iostream>
using namespace std;
int main ()
{
	long long int c1, c2, c3, br1, br2, br3, m, 
		res=0, qty;
	cin >>c1 >>c2 >>c3
		>>br1 >>br2 >>br3
		>>m;
	if (c1>c2 || (c1==c2 && br1<br2))
	{
		swap(c1, c2) ;
		swap(br1, br2) ;
	} ;
	if (c2>c3 || (c2==c3 && br2<br3))
	{
		swap (c2, c3) ;
		swap (br2, br3) ;
	} ;
	if (c1>c2 || (c1==c2 && br1<br2))
	{
		swap (c1, c2) ;
		swap (br1, br2) ;
	} ;

// cout <<c1<<' '<<c2<<' '<<c3<<'\n'
// <<br1 <<' ' <<br2 <<' ' <<br3 <<endl;

		if ( c1!=0 && m!=0)
		{
			qty = (m/c1 > br1) ? br1 : m/c1 ;
			res += qty ;
			if ( qty!=0 )
				m=m-(c1*qty) ;
		}
		else if (c1==0) // price is Zero
			res+=br1;
			
		if ( c2!=0 && m!=0)
		{
			qty = (m/c2 > br2) ? br2 : m/c2 ;
			res += qty ;
			if ( qty!=0 )
				m=m-(c2*qty) ;
		}
		else if (c2==0) // price is Zero
			res+=br2;

		if ( c3!=0 && m!=0)
		{
			qty = (m/c3 > br3) ? br3 : m/c3 ;
			res += qty ;
			if ( qty!=0 )
				m=m-(c3*qty) ;
		}
		else if (c3==0) // price is Zero
			res+=br3;

	cout <<res <<endl;
	return 0;
}
