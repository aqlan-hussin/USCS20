5#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int i;
	double current[10], resistance[10], volts[10];
	
	for (i = 0; i < 10; i++)
	{
		cout << "Please enter the value of current: ";
		cin >> current[i];
		cout << "Please enter the value of resistance: ";
		cin >> resistance[i];
		volts[i] = current[i] * resistance[i];

	}
	
	cout << "\nCurrent\t\tResistance\t\tVolts" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << setw(7) << current[i];
		cout << setw(12) << resistance[i];
		cout << setw(10) << volts[i] << endl;
	}
	return 0;
}