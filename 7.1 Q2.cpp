#include <iostream>
using namespace std;

int main() 
{
	int i, j, fmax[10], max = 0;
	
	for (i = 0; i < 10; i++)
	{
		cout << "Please enter a number: ";
		cin >> fmax[i];
		if (fmax[i] > max)
		{
			max = fmax[i];
			j = i;
		}
	}
	
	cout << "\nThe maximum value is " << max << endl;
	cout << "This is element number " << j << " in the list of numbers";
	
	return 0;
}