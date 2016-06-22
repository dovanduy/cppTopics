#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	//properties
	int identity;
	string Name;
	string CurrentCourse;
	//getters
	int getID() {return identity;};
	string getName() {return Name;};
	string getCurrentCourse() {return CurrentCourse;};
	//setters
	void setID(int _ID)
	{
	    identity = _ID;
	}
	void setName(string _Name)
	{
	    Name = _Name;
	}
	void setCurrentCourse(string _CurrentCourse)
	{
	    CurrentCourse = _CurrentCourse;
	}
};

class Students : public Person
{
private:
	int currentPoints; //for course (0-100)
	int averageEvaluationMark; //(2.0 - 6.00)

public:
	void setCurrentPoints(int _CurrentPoints)
	{
	    currentPoints = _CurrentPoints;
	}
	void setAverageEvaluationMark(int _averageEvaluationMark)
	{
	    averageEvaluationMark = _averageEvaluationMark;
	}
	int getCurrentPoints() {return currentPoints;};
	int getAverageEvaluationMark() {return averageEvaluationMark;};

};

class Teachers : public Person
{
private:
	int MonthlySalary;
	int passedDays; // passed days since joining Soft Uni
public:
	void setMonthlySalary(int _MonthlySalary)
	{
	    MonthlySalary = _MonthlySalary;
	}
	void setPassedDays(int _passedDays)
	{
	    passedDays = _passedDays;
	}
	int getMonthlySalary() {return MonthlySalary;};
	int getPassedDays() {return passedDays;};
};

class GuestTeachers : public Person
{
private:
	int salaryForCourse;

public:
	void setSalaryForCourse(int _salaryForCourse)
	{
	    salaryForCourse = _salaryForCourse;
	}
	int getSalaryForCourse() {return salaryForCourse;};
};

int main()
{
    Teachers aTeacher;
    Students aStudent;
    GuestTeachers aGuestTeacher;

	int option = 0;
	int identity;
	int Points;
	if (Points < 0 || Points > 100)
    {
        cout << "Bad input! " << endl;
    }
	int EvaluationMark;
	if(EvaluationMark < 2 && EvaluationMark >6)
    {
        cout << "Bad input! " << endl;
    }
	int MonthlySalary;
	int passedDays;
	int SalaryForCourse;
	string Name;
	string Course;

	cout << "Get data for student with ID: 1" << endl;
	cout << "Get data for teacher with ID: 2" << endl;
	cout << "Get data for guest teacher with ID: 3" << endl;
	cout << "Add data for new student: 4" << endl;
	cout << "Add data for new teacher: 5" << endl;
	cout << "Add data for new guest	teacher: 6" << endl;

	unsigned short int arr[65535];

	while(true)
    {
        cout << "Enter option: ";
        cin >> option;
        {
            if(option == 7)
            {
                break;
            }
            if (option < 1 || option > 7)
            {
                cout << "Bad input! " << endl;
            }
            switch(option)
            {
            case 1:
                cout << aStudent.getID() << endl;
                cout << aStudent.getName() << endl;
                cout << aStudent.getCurrentCourse() << endl;
                cout << aStudent.getCurrentPoints() << endl;
                cout << aStudent.getAverageEvaluationMark() << endl;
                break;
            case 2:
                cout << aTeacher.getID() << endl;
                cout << aTeacher.getName() << endl;
                cout << aTeacher.getCurrentCourse() << endl;
                cout << aTeacher.getMonthlySalary() << endl;
                cout << aTeacher.getPassedDays() << endl;
                break;
            case 3:
                cout << aGuestTeacher.getID() << endl;
                cout << aGuestTeacher.getName() << endl;
                cout << aGuestTeacher.getCurrentCourse() << endl;
                cout << aGuestTeacher.getSalaryForCourse() << endl;
                break;
            case 4:
                cout << "Enter ID, Name, Current Course , Current Points and Average Evaliation Mark: "<< endl;
                cin >> identity >> Name >> Course >> Points >> EvaluationMark;
                aStudent.setID(identity);
                aStudent.setName(Name);
                aStudent.setCurrentCourse(Course);
                aStudent.setCurrentPoints(Points);
                aStudent.setAverageEvaluationMark(EvaluationMark);
                cout << "A student profile has been added." << endl;
                break;
            case 5:
                cin >> identity >> Name >> Course >> MonthlySalary >> passedDays;
                aTeacher.setID(identity);
                aTeacher.setName(Name);
                aTeacher.setCurrentCourse(Course);
                aTeacher.setMonthlySalary(MonthlySalary);
                aTeacher.setPassedDays(passedDays);
                cout << "A teacher profile has been added." << endl;
                break;
            case 6:
                cin >> identity >> Name >> Course >> SalaryForCourse;
                aGuestTeacher.setID(identity);
                aGuestTeacher.setName(Name);
                aGuestTeacher.setCurrentCourse(Course);
                aGuestTeacher.setSalaryForCourse(SalaryForCourse);
                cout << "A guest teacher profile had been added." << endl;
                break;
            }
        }
    }

	return 0;
}

