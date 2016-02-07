// ConsoleApplication15.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
enum etype  { laborer, secretary, manager, accountant, executive, researcher };
class date
{
private:
	int year;
	int month;
	int day;
public:
	date()
	{
		year = 0;
		month = 0;
		day = 0;
	}
	date(int yar, int mon, int dy)
	{
		year = yar;
		month = mon;
		day = dy;
	}
	void getdate()
	{
		char dummy;
		cout << "date of start working" << endl;
		cout << "input date in format y/m/d" << endl;
		cin >> year >> dummy >> month >> dummy >> day;
	}
	void showdate()const
	{
		cout << "date of : " << endl;
		cout << year << "/" << month << "/" << day << endl;
	}
};
class employee
{
private:
	int number;
	float payment;
	etype duty;
	date starter;
public:
	employee()
	{
		number = 0;
		payment = 0;
	}
	employee(int numb, float pay)
	{
		number = numb;
		payment = pay;
	}
	void getemploy()
	{
		char dummychar;
		cout << "input number of employee: "; cin >> number;
		cout << "input payment of employee: "; cin >> payment;
		cout << "input date of start working: "; starter.getdate();
		cout << "Input first letter of duty: "; cin >> dummychar;
			switch (dummychar)
			{
			case 'l':
				duty = laborer;
				break;
			case 's':
				duty = secretary;
				break;
			case 'm':
				duty = manager;
				break;
			case 'a':
				duty = accountant;
				break;
			case 'e':
				duty = executive;
				break;
			case 'r':
				duty = researcher;
				break;
			default:
				cout << "error!" << endl;
			}
	}
	void displayemployee()const
	{
		cout << "number:  " << number << endl;
		cout << "payment:  " << payment << endl;
		cout << "start working:  "; starter.showdate();
		cout << endl; switch (duty)
		{
		case laborer:
			cout << "employee is a laborer" << endl;
			break;
		case secretary:
			cout << "employee is a secretart" << endl;
			break;
		case manager:
			cout << "employee is a manager" << endl;
			break;
		case accountant: 
			cout << "employee is a accountant" << endl;
			break;
		case executive:
			cout << "employee is a executive" << endl;
			break;
		case researcher:
			cout << "employee is a researcher" << endl;
			break;
		}

	}
};
int main()
{
	int counter = 0;
	employee first, second, third;
	do {
		counter++;
		switch (counter) 
		{
		case 1:
			cout << "input data of first employee" << endl;
			first.getemploy();
			break;
		case 2:
			cout << "input data of second employee" << endl;
			second.getemploy();
			break;
		case 3:
			cout << "input data of third employee" << endl;
			third.getemploy();
			break;
		}
	} while (counter < 4);
	first.displayemployee();
	second.displayemployee();
	third.displayemployee();
	system("pause");
}

