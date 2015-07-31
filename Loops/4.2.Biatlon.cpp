#include<iostream>
using namespace std;
main()
{
	int N, min, sec, shoots, 
	    totalTime, winN, winTotalTime;
	cin >>N;
	cin >>min >>sec >>shoots;
	winTotalTime = totalTime = 60*min + sec + (5-shoots)*30;
	winN = 1;
	for (int i=2; i<=N; i++)
	{
		cin >>min >>sec >>shoots;
		totalTime = 60*min + sec + (5-shoots)*30;
		if (totalTime<winTotalTime)
		{
			winN = i;
			winTotalTime = totalTime;
		}
	};
	cout <<winN <<endl
		 <<(winTotalTime/60) <<" " <<(winTotalTime%60);
}
