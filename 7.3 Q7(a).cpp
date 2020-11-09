#include <iostream>
using namespace std;

int main() 
{
	int val[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
	int i, j, max = 0;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (max < val[i][j])
				max = val[i][j];
		}
	}
	
	cout << "The maximum value is " << max;
	
	return 0;
}