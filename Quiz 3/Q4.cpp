#include <iostream>
using namespace std;

int main() 
{
	int num1, num2;
	
	cout << "Enter a number: ";
	cin >> num1;
	cout << "The divisors are: ";
	
	for(num2 = 1; num2 <= num1; num2++)
	{
		if (num1 % num2 == 0)
		{
			cout << num2 << " ";
		}
	}
	
	return 0;
}