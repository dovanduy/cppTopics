/* ���. 78, ���. 16, ������������ �� C++, ����� ����, 2012,
�� �� ������� ��������, ����� ������� �� ������������
���������� ����� n � m, ��������� � ��������. ����������
�� ������� ����� k, ���������� �� ������� �����:
������� �� ����� � ���� �� ������� ����� �� n � ���������� ����� �� m,
���������� �� ����� � ���� �� ���������� ����� �� n � ������� ����� �� m,
� �������� � ���� �� ����������� ����� �� n � m.
��� ������� ��������� ����, �� ����� �� ����� �� ������� 
� �� ����� ���������� ����.
����		�����				����		�����
362	236		994					369 921		489		*/
#include <iostream>
using namespace std;
main()
{
	int n, m, k, nDig1, nDig2, nDig3,
		mDig1, mDig2, mDig3, kDig1, kDig2, kDig3;
	cin >>n >>m;
	nDig1 = n/100%10; // hundreds as a 1-st digit
	nDig2 = n/10%10;  // 2-nd digit of n
	nDig3 = n%10;
	mDig1 = m/100%10; // hundreds as a 1-st digit
	mDig2 = m/10%10;  // 2-nd digit of m
	mDig3 = m%10;	  // 3-rd digit 
	kDig1 = nDig1 + mDig3;
	if (kDig1>9) kDig1 = kDig2/10 + kDig1%10 ;
	kDig2 = nDig2 + mDig2;
	if (kDig2>9) kDig2 = kDig2/10 + kDig2%10 ;
	kDig3 = nDig3 + mDig1;
	if (kDig3>9) kDig3 = kDig3/10 + kDig3%10 ;
	k = kDig1*100 + kDig2*10 + kDig3;
	cout <<k;
}
