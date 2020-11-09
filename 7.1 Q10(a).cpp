#include <iostream>
using namespace std;

int main() 
{
	int i;
	double volts[9];
	volts[0] = 11.95;
	volts[1] = 16.32;
	volts[2] = 12.15;
	volts[3] = 8.22;
	volts[4] = 15.98;
	volts[5] = 26.22;
	volts[6] = 13.54;
	volts[7] = 6.45;
	volts[8] = 17.59;
	
	for (i = 0; i < 8; i++)
		cout << volts[i] << " ";
	
	return 0;
}