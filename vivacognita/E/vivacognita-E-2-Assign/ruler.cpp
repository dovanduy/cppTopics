#include <iostream>
using namespace std ;
int main ()
{
	int		l1, e1, s1,
			l2, e2, s2,
			l3, e3, s3, min;
	cin >>l1 >>e1
		>>l2 >>e2
		>>l3>>e3 ;
	s1 = e1-l1;
	s2 = e2-l2;
	s3 = e3-l3;
	min=s1;
	if (s2<min)
		min = s2 ;
	if (s3<min)
		min = s3 ;
	cout <<min <<endl ;
	return 0;
}
