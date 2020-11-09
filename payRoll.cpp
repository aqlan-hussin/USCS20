#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() 
{
	int id, hours;
	double gross, tax, kwsp, deduct, netPay;
	double const empUnion = 10;
	ofstream pay("payRoll.dat");
	
	if (pay.fail())
	{
		cout << "The file was not successfully opened";
		exit(1);
	}

	while (id != -1)
	{
		cout << "Please enter your employee's id: ";
		cin >> id;
		if (id == -1)
		{
			break;
		}
		
		else
		{
			cout << "Please enter your hours worked per week: ";
			cin >> hours;
			cout << endl;
			if (hours <= 40)
			{
				gross = 4.0 * hours;
			}
			
			else if (hours > 40 && hours <= 50)
			{
				gross = 1.5 * 4.0 * hours;
			}
			
			else
			{
				gross = 2.0 * 4.0 * hours;
			}
			
			tax = 8.0 / 100 * gross;
			kwsp = 10.0 / 100 * gross;
			deduct = tax + kwsp + empUnion;
			netPay = gross - deduct;
			
			pay << fixed << setprecision(2)
				<< id << "\tRM" << gross << "\tRM" << deduct << "\t\tRM" << netPay << endl;
		}
	}
	
	pay.close();
	cout << "The file has been successfully written";
	
	return 0;
}