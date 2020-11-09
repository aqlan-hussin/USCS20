#include <iostream>
using namespace std;

int main() 
{
	int n, f;
	f = 1;
	
	cout << "Please enter any number from 1 to 8: ";
	cin >> n;
	
	
	if (n >= 1 && n <= 8)
	{
		while (n > 0)
		{
			f = f * n;
			n--;
		}
		cout << "n! = " << f;
	}
	
	else 
	{
		cout << "Please enter number from 1 to 8 only!";
	}
	
	return 0;
}