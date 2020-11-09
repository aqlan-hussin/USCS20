#include <iostream>
using namespace std;

int main() 
{
	double slopes[9] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	int i;
	double min = slopes[0], max = slopes[0];
	
	for (i = 1; i < 9; i++)
	{
		if (max < slopes[i])
		{
			max = slopes[i];
		}
		
		else if (min > slopes[i])
		{
			min = slopes[i];
		}
	}
	
	cout << "The maximum value is " << max << endl
		 << "The minimum value is " << min;
		
	return 0;
}