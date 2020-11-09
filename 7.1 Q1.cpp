#include <iostream>
using namespace std;

int main() 
{
	int i, temp[8], sum = 0;
	
	for (i = 0; i < 8; i++)
	{
		cout << "Enter a number: ";
		cin >> temp[i];
		sum = sum + temp[i];
	}
	
	cout << endl;
	
	for (i = 0; i < 8; i++)
		cout << "number " << i << " is " << temp[i] << endl;
	
	cout << "\nThe average of the numbers is " << sum / 8.0;
	
	return 0;
}