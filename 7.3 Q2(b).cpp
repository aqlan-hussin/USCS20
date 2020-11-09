#include <iostream>
using namespace std;

int main() 
{
	int i, j, val[3][4] = {8, 16, 9, 52, 3, 15, 27, 6, 14, 25, 2, 10};
	
	for (i = 0; i < 3; ++i)
	{
		int sum = 0;
		for (j = 0; j < 4; ++j)
		{
			sum = sum + val[i][j];
		}
		
		cout << "The sum of the numbers in row " << i << " is " << sum << endl;

	}
	
	return 0;
}