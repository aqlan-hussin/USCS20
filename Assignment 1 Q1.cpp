// Aqlan Najwan bin Mohd Zakil Hussin
// 1311170374
// Indiana
// Copyright (c) 2015 Summer Semester. All rights reserved.

#include <iostream>
#include <iomanip>

using namespace std;

int main()															// This program is designed to calculate the salary of a worker
																	// based on his/her working hours.
{
	int hours;
	double salary;
	
	cout << "Enter the working hours: ";
	cin >> hours;													// Here, the user will need to enter the working hours.
	
	if (hours <= 40)												// If the working hour is less than or equal to 40 hours,
	{																// the salary that the worker will receive is
		salary = 8.0 * hours;										// $8.00 per working hour.
		cout << fixed << setprecision(2)
			 << "The salary is $" << salary << endl;
	}
		
	else															// If the working hour is more than 40 hours,
	{																// the salary that the worker will recieve is
		salary = 320.0 + (hours - 40) * 12.0;						// $320.00 plus $12.00 per hour worked after the 40th hour.
		cout << fixed << setprecision(2)
			 << "The salary is $" << salary << endl;
	}
	
	return 0;
}