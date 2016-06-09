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
		cout <<"Number of Floors=> "; cin >>floors ;
		cout <<"Number of Offices=> "; cin >>offices ;
		cout <<"Number of Employees=> "; cin >>employees ;
		cout <<"Number of Seats=> "; cin>>seats ;
		cout <<"Is there a first floor restaurant "; cin >>ch;
		this->is1stFloorRestaurant = this->isYes(ch) ;
	}
		Building (string name, string owner, int floors, int offices, int employees, int seats, bool is1stFloorRestaurant=false)
	{
		this->name= name ;
		this->owner = owner ;
		this->floors = floors ;
		this->offices = offices ;
		this->employees = employees ;
		this->seats = seats ;
		this->is1stFloorRestaurant = is1stFloorRestaurant ;
	}

	~Building ()
	{
		cout <<"\nBldgDestuctor\n" ;
	}
} ;
