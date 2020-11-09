// Aqlan Najwan bin Mohd Zakil Hussin
// 1311170374
// Indiana
// Copyright (c) 2015 Summer Semester. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double income, rate, bill;
	int consult;
	
	cout << "Please enter your income: ";
	cin >> income;
	cout << "Please enter your consulting time (in minutes): ";
	cin >> consult;
	cout << "Please enter your hourly rate: ";
	cin >> rate;
	
	if (income <= 25000)
	{
		if (consult <= 30)
		{
			cout << "\nYour billing amount is: RM 00.00";
		}
		
		else 
		{
			bill = 0.4 * rate * (consult - 30) / 60;
			cout << fixed << setprecision(2)
				 << "\nYour billing amount is: RM " << bill;
		}
	}
	
	else 
	{
		if (consult <= 20)
		{
			cout << "\nYour billing amount is: RM 00.00";
		}
		
		else
		{
			bill = 0.7 * rate * (consult - 20) / 60;
			cout << fixed << setprecision(2)
				 << "\nYour billing amount is: RM " << bill;
		}
	}
	
	return 0;
}