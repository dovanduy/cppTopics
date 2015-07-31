#include <iostream>
using namespace std;
int main ()
{
	int S, s1, s2, s3, q1, q2, q3, max=0;
	cin >>S >>s1 >>s2 >>s3;
	if (S<s1 && S<s2 && S<s3)
	{
		cout <<max;
		return 0;
	}
	q1 = S/s1;
	q2 = S/s2;
	q3 = S/s3;
	//cout <<"q1="<<q1<<"\tq2="<<q2<<"\tq3="<<q3<<endl;
	max = (q1<=q2) ? q2 : q1;
	max = (q3<=max) ? max : q3;
	cout <<max;
	return 0 ;
}
