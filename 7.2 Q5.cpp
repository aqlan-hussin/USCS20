#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	int resistance[5] = {16, 27, 39, 56, 81};
	double current[5], power[5], totalcurrent = 0, totalpower = 0;
	int totalresist = resistance[0] + resistance[1] + resistance[2] + resistance[3] + resistance[4];
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter the value of current: ";
		cin >> current[i];
		totalcurrent = totalcurrent + current[i];
		power[i] = resistance[i] * pow(current[i],2);
		totalpower = totalpower + power[i];
	}
	
	cout << "\nResistance\t\tCurrent\t\tPower" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << setw(10) << resistance[i]
			 << setw(8) << current[i]
			 << setw(12) << power[i] << endl;
	}
	
	cout << setw(10) << "----------"
	 	 << setw(8) << "--------"
	 	 << setw(12) << "------------" << endl
		 << setw(10) << totalresist
	 	 << setw(8) << totalcurrent
	 	 << setw(12) << totalpower << endl;
	
	return 0;
}