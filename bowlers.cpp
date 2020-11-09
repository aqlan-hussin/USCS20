#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int i, j, bowlers[3][4] = {100, 120, 150, 100, 45, 90, 150, 145, 70, 90, 125, 140};
	int sum = 0;
	double average;
	
	cout << setw(15) << "sum";
	cout << setw(9) << "average" << endl;
	
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum = sum + bowlers[i][j];
		}
		
		average = sum / 4.0;
		cout << setw(8) << "Player" << i + 1;
		cout << setw(6) << sum;
		cout << fixed << setprecision(2) << setw(9) << average << endl;

	}
	
	return 0;
}