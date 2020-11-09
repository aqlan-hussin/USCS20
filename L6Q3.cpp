#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	
	cout << "Please enter a number: ";
	cin >> n;
	
	for (i = n; i > 0; i--)
	{
		for (j = n; j > 0; j--)
			{
				cout << "* ";
			}
		cout << endl;
	}
	
	return 0;
}