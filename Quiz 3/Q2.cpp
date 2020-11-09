#include <iostream>
using namespace std;

int main() 
{
	int n, sum;
	n = 2;
	sum = 0;
	
	while (n <= 100)
	{
		sum = sum + n;
		n = n + 2;
	}
	
	cout << sum;
	
	return 0;
}