#include <iostream>
using namespace std;

int main()
{
	int n, i;
	
	cout << "Please enter your favorite number: ";
	cin >> n;
	
	
	for (i = -n; i <= -1; i++)
	{
		cout << i << " ";
	}
	
	for (i = 1; i <= n; i++)
	{
		cout << i << " ";
	}

	return 0;
}