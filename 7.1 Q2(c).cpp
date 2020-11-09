#include <iostream>
using namespace std;

int main() 
{
	int i, j, fmin[10];
	
	cout << "Please enter a number: ";
	cin >> fmin[0];
	int min = fmin[0];
	
	for (i = 1; i < 10; i++)
	{
		cout << "Please enter a number: ";
		cin >> fmin[i];
		if (fmin[i] < min)
		{
			min = fmin[i];
			j = i;
		}
	}
	
	cout << "\nThe minimum value is " << min << endl;
	cout << "This is element number " << j << " in the list of numbers";
	
	return 0;
}