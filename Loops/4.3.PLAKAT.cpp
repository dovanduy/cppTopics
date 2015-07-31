#include<iostream>
using namespace std;
main()
{
	int N, K;
	cin >>N>>K;
	cout <<'G';
	if (K!=1)
		for (int i=K; i<N; i=i+K)
		cout <<'O';
	else // K == 1
		for (int i=2; i<N; i=i+K)
		cout <<'O';
	if (N>1)
		cout <<'L';
}
