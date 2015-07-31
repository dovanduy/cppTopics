// SHOKOLAD.cpp
#include <iostream>
using namespace std;
main ()
{
	int pa, pb, pc, paLV, paST, pbLV, pbST, pcLV, pcST, paPrice, pbPrice, pcPrice, minPrice ;
	cin >>pa >>pb >>pc >>paLV >>paST >>pbLV >>pbST >>pcLV >>pcST ;
	paPrice = pa*(100*paLV+paST) ;
	pbPrice = pb*(100*pbLV+pbST) ;
	pcPrice = pc*(100*pcLV+pcST) ;
	minPrice = (paPrice < pbPrice) ? paPrice : pbPrice ;
	minPrice = (minPrice < pcPrice) ? minPrice : pcPrice ;
	if (minPrice == paPrice)
	{
		cout <<'A' <<endl <<(paPrice/100) <<' ' <<(paPrice%100);
	}
	else if (minPrice == pbPrice)
	{
		cout <<'B' <<endl <<(pbPrice/100) <<' ' <<(pbPrice%100);
	}
	else if (minPrice == pcPrice)
	{
		cout <<'C' <<endl <<(pcPrice/100) <<' ' <<(pcPrice%100);
	}
	else cerr <<'?' ;
}
