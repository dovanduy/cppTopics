class Wares : myStrings //Стоки
{
private:
	txtFilesDB<long long> Ware ("Ware Names: ", wares.dat) ;
	
public:
	bool isWare (string intAsSring) {
		return Ware.isKeyHere(myStrings::fromStringToLongLong(intAsString)) ;
	};
	Wares ()
	{
	} ;
	
	~Wares ()
	{
	} ;
} ;
