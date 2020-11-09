// Aqlan Najwan bin Mohd Zakil Hussin
// 1311170374
// Indiana
// Copyright (c) 2015 Summer Semester. All rights reserved.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

double calPrice(double);
int getItemNum(char);

int main() 
{
	int menu, orderNum = 0, i, count = 0;
	string itemNum[5][3] = {	"Chicken Special",		"Apple Pie",		"Café Mocha",
								"Chicken Nuggets",		"Butter Bread",		"Café Late",
								"Rainbow Fillet",		"No-salt Fries",	"Orange Juice",
								"Double Cheeseburger",	"Fun Ice Cream",	"Ice Lemon Tea",
								"Tofu Burger",			"Rice Cracker",		"Pepsi"};
	double price[5][3] = {	6.50, 2.49, 1.99,
							5.50, 2.00, 1.99,
							6.50, 1.49, 2.49,
							7.00, 2.00, 2.49,
							3.49, 1.49, 1.99};
	string order[1000];
	double orderPrice[1000];
	double total = 0;
	double totalPrice;
	char item, decision1, decision2;
	
	// display the restaurant's menu
	cout << "My Fast Food" << endl
		 << "Type of Menu" << endl << endl;
		
	cout << "------------------------------------------------------------------------------------------------" << endl
		 << fixed << setw(20) << "1 - Entrée"
		 << fixed << setw(37) << "2 - Side Dish"
		 << fixed << setw(30) << "3 - Drink" << endl
		 << "------------------------------------------------------------------------------------------------" << endl;
		
	cout << fixed << setprecision(2)
		 << "a) " << fixed << setw(10) << itemNum[0][0] 
		 << fixed << setw(7) << "$" << price[0][0] 
		 << fixed << setw(10) << "a) " << fixed << setw(9) << itemNum[0][1] 
		 << fixed << setw(10) << "$" << price[0][1] 
		 << fixed << setw(10) << "a) " << fixed << setw(10) << itemNum[0][2] 
		 << fixed << setw(10) << "$" << price[0][2] << endl
		 << "b) " << fixed << setw(10) << itemNum[1][0] 
		 << fixed << setw(7) << "$" << price[1][0]
		 << fixed << setw(10) << "b) " << fixed << setw(12) << itemNum[1][1] 
		 << fixed << setw(7) << "$" << price[1][1]
		 << fixed << setw(10) << "b) " << fixed << setw(9) << itemNum[1][2] 
		 << fixed << setw(11) << "$" << price[1][2] << endl
		 << "c) " << fixed << setw(10) << itemNum[2][0] 
		 << fixed << setw(8) << "$" << price[2][0] 
		 << fixed << setw(10) << "c) " << fixed << setw(13) << itemNum[2][1] 
		 << fixed << setw(6) << "$" << price[2][1] 
		 << fixed << setw(10) << "c) " << fixed << setw(12) << itemNum[2][2] 
		 << fixed << setw(8) << "$" << price[2][2] << endl
		 << "d) " << fixed << setw(10) << itemNum[3][0] 
		 << fixed << setw(3) << "$" << price[3][0] 
		 << fixed << setw(10) << "d) " << fixed << setw(13) << itemNum[3][1] 
		 << fixed << setw(6) << "$" << price[3][1] 
		 << fixed << setw(10) << "d) " << fixed << setw(13) << itemNum[3][2] 
		 << fixed << setw(7) << "$" << price[3][2] << endl
		 << "e) " << fixed << setw(10) << itemNum [4][0] 
		 << fixed << setw(11) << "$" << price[4][0] 
		 << fixed << setw(10) << "e) " << fixed << setw(11) << itemNum [4][1] 
		 << fixed << setw(7) << "$" << price[4][1] 
		 << fixed << setw(10) << "e) " << fixed << setw(5) << itemNum [4][2] 
		 << fixed << setw(15) << "$" << price[4][2] << endl << endl;
	
	ofstream outFile("Project.dat");
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	
	// set the output file stream formats
		
		outFile << "My Fast Food" << endl
			 	<< "Type of Menu" << endl << endl;
			
		outFile << "------------------------------------------------------------------------------------------" << endl
				<< fixed << setw(20) << "1 - Entrée"
			 	<< fixed << setw(34) << "2 - Side Dish"
			 	<< fixed << setw(27) << "3 - Drink" << endl
				<< "------------------------------------------------------------------------------------------" << endl;
			
		outFile << fixed << setprecision(2)
			 	<< "a) " << fixed << setw(10) << itemNum[0][0] 
			 	<< fixed << setw(7) << "$" << price[0][0] 
			 	<< fixed << setw(9) << "a) " << fixed << setw(9) << itemNum[0][1] 
				<< fixed << setw(10) << "$" << price[0][1] 
				<< fixed << setw(7) << "a) " << fixed << setw(10) << itemNum[0][2] 
			 	<< fixed << setw(8) << "$" << price[0][2] << endl
				<< "b) " << fixed << setw(10) << itemNum[1][0] 
				<< fixed << setw(7) << "$" << price[1][0]
				<< fixed << setw(9) << "b) " << fixed << setw(12) << itemNum[1][1] 
				<< fixed << setw(7) << "$" << price[1][1]
				<< fixed << setw(7) << "b) " << fixed << setw(9) << itemNum[1][2] 
				<< fixed << setw(9) << "$" << price[1][2] << endl
				<< "c) " << fixed << setw(10) << itemNum[2][0] 
				<< fixed << setw(8) << "$" << price[2][0] 
				<< fixed << setw(9) << "c) " << fixed << setw(13) << itemNum[2][1] 
				<< fixed << setw(6) << "$" << price[2][1] 
				<< fixed << setw(7) << "c) " << fixed << setw(12) << itemNum[2][2] 
				<< fixed << setw(6) << "$" << price[2][2] << endl
				<< "d) " << fixed << setw(10) << itemNum[3][0] 
				<< fixed << setw(3) << "$" << price[3][0] 
				<< fixed << setw(9) << "d) " << fixed << setw(13) << itemNum[3][1] 
				<< fixed << setw(6) << "$" << price[3][1] 
				<< fixed << setw(7) << "d) " << fixed << setw(13) << itemNum[3][2] 
				<< fixed << setw(5) << "$" << price[3][2] << endl
				<< "e) " << fixed << setw(10) << itemNum [4][0] 
				<< fixed << setw(11) << "$" << price[4][0] 
				<< fixed << setw(9) << "e) " << fixed << setw(11) << itemNum [4][1] 
				<< fixed << setw(7) << "$" << price[4][1] 
				<< fixed << setw(7) << "e) " << fixed << setw(5) << itemNum [4][2] 
				<< fixed << setw(13) << "$" << price[4][2] << endl << endl;
		
		outFile.close();
		
	// taking the customer order
	do
	{
		cout << "Choose the menu number(1 - 3): ";
		cin >> menu;
		
		if (menu == 1)
		{
			do
			{
				cout << "Item(a - e): ";
				cin >> item;
				if (getItemNum(item) >= 0 && getItemNum(item) <= 4)
				{
					cout << "Number of order: ";
					cin >> orderNum;
					total = total + orderNum * price[getItemNum(item)][menu - 1];
					cout << "Total Price: $" << orderNum * price[getItemNum(item)][menu - 1] << endl;
					order[count] = itemNum[getItemNum(item)][menu - 1];
					orderPrice[count] = orderNum * price[getItemNum(item)][menu - 1];
					count++;
					do
					{
						cout << "More item (Y - Yes, N - No): ";
						cin >> decision2;
						cout << endl;
					}
					while (!(decision2 == 'Y' || decision2 == 'N'));
				}
				else
				{
					cout << "Please enter item between a and e only!" << endl;
					decision2 = 'Y';
				}
			}
			while (decision2 == 'Y');
		}
		
		else if (menu == 2)
		{
			do
			{
				cout << "Item(a - e): ";
				cin >> item;
				if (getItemNum(item) >= 0 && getItemNum(item) <= 4)
				{
					cout << "Number of order: ";
					cin >> orderNum;
					total = total + orderNum * price[getItemNum(item)][menu - 1];
					cout << "Total Price: $" << orderNum * price[getItemNum(item)][menu - 1] << endl;
					order[count] = itemNum[getItemNum(item)][menu - 1];
					orderPrice[count] = orderNum * price[getItemNum(item)][menu - 1];
					count++;
					do
					{
						cout << "More item (Y - Yes, N - No): ";
						cin >> decision2;
						cout << endl;
					}
					while (!(decision2 == 'Y' || decision2 == 'N'));
				}
				else
				{
					cout << "Please enter item between a and e only!" << endl;
					decision2 = 'Y';
				}
			}
			while (decision2 == 'Y');
		}
		
		else if (menu == 3)
		{
			do
			{
				cout << "Item(a - e): ";
				cin >> item;
				if (getItemNum(item) >= 0 && getItemNum(item) <= 4)
				{
					cout << "Number of order: ";
					cin >> orderNum;
					total = total + orderNum * price[getItemNum(item)][menu - 1];
					cout << "Total Price: $" << orderNum * price[getItemNum(item)][menu - 1] << endl;
					order[count] = itemNum[getItemNum(item)][menu - 1];
					orderPrice[count] = orderNum * price[getItemNum(item)][menu - 1];
					count++;
					do
					{
						cout << "More item (Y - Yes, N - No): ";
						cin >> decision2;
						cout << endl;
					}
					while (!(decision2 == 'Y' || decision2 == 'N'));
				}
				else
				{
					cout << "Please enter item between a and e only!" << endl;
					decision2 = 'Y';
				}
			}
			while (decision2 == 'Y');
		}
		
		else
		{
			cout << "Please enter menu number between 1 and 3 only!" << endl;
			decision1 = 'Y';
		}
		
		if (decision2 == 'N')
		{
			do 
			{
				cout << "Other Menu (Y - Yes, N - No)? ";
				cin >> decision1;
				cout << endl;
			}
			while (!(decision1 == 'Y' || decision1 == 'N'));
		}
		
	}
	while (decision1 == 'Y');
		
	totalPrice = calPrice(total);
	
	// display the menu ordered
	cout << endl << "Your menu ordered: " << endl;
	
	for (i = 0; i < count; i++)
	{
		cout << " " << fixed << setw(20) << setiosflags(ios::left) << order[i] 
			 << fixed << setw(3) << "$" 
			 << fixed << setw(4) << orderPrice[i] << endl;
	}
	
	// display the total price including GST
	cout << endl << "Your total charge (plus 6% GST) is $" << totalPrice;
		

	return 0;
}

// calculate total price including GST
double calPrice(double x)
{
	double y;
	y = x + 0.06 * x;
	
	return y;
}

// getting item number
int getItemNum(char n)
{
	switch (n)
	{
		case 'a':
			return 0;
			break;
		case 'b':
			return 1;
			break;
		case 'c':
			return 2;
			break;
		case 'd':
			return 3;
			break;
		case 'e':
			return 4;
			break;
	}
	return -1;
}