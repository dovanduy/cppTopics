#include <iostream>
using namespace std;
main ()
{
	const int charCount=6;
	char ch[charCount];
	int countB=0, countC=0, countZ=0, max=-1;
	cin.getline(ch, charCount);
	for	(int i=0; i<charCount; i++)
	{
		if (ch[i]>='0' && ch[i]<='9')
			countC++;
		else if ((ch[i]>='A' && ch[i]<='Z') ||
				 (ch[i]>='a' && ch[i]<='z'))
			countB++;
		else
			countZ++;
	};
	max = (countB>=countC) ? countB : countC;
	max = (max>=countZ) ? max : countZ;
	if (max==countB)
		cout <<'B';
	else if (max==countC)
		cout <<'C';
	else
		cout <<'Z';
}
