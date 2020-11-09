#include <iostream>
using namespace std;

int main() 
{
	int i, j, val[3][4] = {8, 16, 9, 52, 3, 15, 27, 6, 14, 25, 2, 10};
	int sum = 0;
	
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			sum = sum + val[i][j];
		}
	}
	
	cout << "The sum of the numbers is " << sum;

	return 0;
}