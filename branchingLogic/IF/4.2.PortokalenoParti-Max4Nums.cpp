#include <iostream>
using namespace std;
main()
{
	int fr1, fr2, fr3, fr4, fr5, max;
	cin >>fr1 >>fr2;
	max = (fr1<=fr2) ? fr2 : fr1;
	cin >>fr3 >>fr4 >>fr5;
	max = (max<=fr3) ? fr3 : max;
	max = (max<=fr4) ? fr4 : max;
	max = (max<=fr5) ? fr5 : max;
	cout <<(fr1+fr2+fr3+fr4+fr5-max+1);
}
