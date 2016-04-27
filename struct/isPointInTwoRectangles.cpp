#include <iostream>
using namespace std;
// Example about struct and functions
struct Point {
	double x;
	double y;
};
struct Rectangle {
	Point P1; // upper left corner
	Point P2; // down right corner
};
bool isInRectangle (Rectangle R, Point A)
{
	return ((A.x >= R.P1.x && A.x <= R.P2.x)
	&&
	(A.y >= R.P2.y && A.y <= R.P1.y)
	) ;
}
main()
{
	Point P1, P2, A;
	Rectangle R1, R2;
	P1.x = 1; 	P1.y = 8;
	P2.x = 15; 	P2.y = 1;
	R1.P1=P1 ; 	R1.P2=P2;
	P1.x = 3; 	P1.y = 12;
	P2.x = 10; 	P2.y = 0;
	R2.P1=P1 ; 	R2.P2=P2;
	cin >>A.x >>A.y ;
	cout <<"\nD1.X=" <<R1.P1.x 
		 <<"\tD1.Y=" <<R1.P1.y
		 <<"\nB1.X=" <<R1.P2.x 
		 <<"\tB1.Y=" <<R1.P2.y
		 <<"\n\nD2.X=" <<R2.P1.x 
		 <<"\tD2.Y=" <<R2.P1.y
		 <<"\nB2.X=" <<R2.P2.x 
		 <<"\tB2.Y=" <<R2.P2.y <<"\n\n" ;
	if (isInRectangle(R1, A) ||
	// Point A in R1 or point A is in R2
		isInRectangle(R2, A)
		)
		cout <<"Yes" ;
	else
		cout <<"No" ;
}
