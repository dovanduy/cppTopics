class Building
{
private:
	string name ;
	string owner ;
	int floors; // qty
	int offices ; // qty
	int employees ;
	int seats ;
	bool is1stFloorRestaurant ;
	inline bool isYes (char c)
	{
		return (c=='Y' || c=='y') ;
	}
protected:
	inline string readNextLine ()
	{
		string res;
		if (cin.peek() == '\n') {
			cin.ignore(1, '\n');
		}
		getline(cin, res, '\n') ;
		return res ;
	}
public:
	Building ()
	{
		char ch ;
		cout <<"Name=> "; this->name=this->readNextLine() ;
		cout <<"Owner=> "; this->owner=this->readNextLine() ;
		cout <<"Number of Floors=> "; this->floors ;
		cout <<"Number of Offices=> "; this->offices ;
		cout <<"Number of Employees=> "; this->employees ;
		cout <<"Number of Seats=> "; this->seats ;
		cout <<"Is there a first floor restaurant "; cin >>ch;
		this->is1stFloorRestaurant = this->isYes(ch) ;
	}
} ;
