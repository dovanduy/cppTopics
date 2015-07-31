#include <iostream>
using namespace std;
main ()
{
	const int scoreCount=4;
	int s, highScore;
	cin >>s;
	if (s<scoreCount*2 || s>scoreCount*6)
		cout <<"NO SOLUTION";
	else if ((s-6)>=(scoreCount-1)*2 && (s-6)<=(scoreCount-1)*6)
		cout <<'6';
	else if ((s-5)>=(scoreCount-1)*2 && (s-5)<=(scoreCount-1)*6)
		cout <<'5';
	else if ((s-4)>=(scoreCount-1)*2 && (s-4)<=(scoreCount-1)*6)
		cout <<'4';
	else if ((s-3)>=(scoreCount-1)*2 && (s-3)<=(scoreCount-1)*6)
		cout <<'3';
	else if ((s-2)>=(scoreCount-1)*2 && (s-2)<=(scoreCount-1)*6)
		cout <<'2';
	else
		cout <<"NO SOLUTION";
}
