#include <iostream>
using namespace std;

int triple(int, int);
int main() 
{
	int i, j, k;
	
	cout << "Please enter a number: ";
	cin >> i;
	cout << "\nPlease enter another number: ";
	cin >> j;
	k = triple(i, j);
	cout << "\n" << k;
}

int triple(int x, int y)
{
	int triple;
	if (y == 3 * x)
	{
		triple = 1;
	}
	
	else 
	{
		triple = 0;
	}
	
	return triple;
}