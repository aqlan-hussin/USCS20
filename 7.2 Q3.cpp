#include <iostream>
using namespace std;

int main() 
{
	double volts[8] = {16.24, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
	int i;
	
	for (i = 0; i < 8; i++)
		cout << volts[i] << " ";
		
	return 0;
}