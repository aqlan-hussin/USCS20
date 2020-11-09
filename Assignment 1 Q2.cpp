// Aqlan Najwan bin Mohd Zakil Hussin
// 1311170374
// Indiana
// Copyright (c) 2015 Summer Semester. All rights reserved.

#include <iostream>

using namespace std;

int main()																			// This program is designed to sort any three different
{																					// integers in ascending order.
	int num1, num2, num3;
	
	cout << "Enter any three different integers: ";
	cin >> num1 >> num2 >> num3;													// Here, the user need to enter any three different integers.
	
	if (num1 < num2 && num1 < num3)													// In this case, the first number is the smallest number.
	{
		if (num2 < num3)												
		{																			// This inner block	
			cout << "\nThe ascending order of the numbers is: "						// is designed
				 << num1 << " " << num2 << " " << num3;								// to compare
		}																			// the second number
																					// and the third number.
		else if (num2 > num3)
		{
			cout << "\nThe ascending order of the numbers is: "
				 << num1 << " " << num3 << " " << num2;
		}
	}
	
	else if (num2 < num1 && num2 < num3)											// In this case, the second number is the smallest number.
	{
		if (num1 < num3)
		{																			// This inner block
			cout << "\nThe ascending order of the numbers is: "						// is designed
				 << num2 << " " << num1 << " " << num3;								// to compare
		}																			// the first number
																					// and the third number.
		else if (num1 > num3)
		{
			cout << "\nThe ascending order of the numbers is: "
				 << num2 << " " << num3 << " " << num1;
		}
	}
	
	else																			// In this case, the third number is the smallest number.
	{
		if (num1 < num2)
		{																			// This inner block
			cout << "\nThe ascending order of the numbers is: "						// is designed
				 << num3 << " " << num1 << " " << num2;								// to compare
		}																			// the first number
																					// and the second number.
		else if (num1 > num2)
		{
			cout << "\nThe ascending order of the numbers is: "
				 << num3 << " " << num2 << " " << num1;
		}
	}
	
	return 0;
}