#include <iostream>
using namespace std;

int alternatingSum (int);
int main()
{
	int x, sum;
	
	cout << "Please enter a number: ";
	cin >> x;
	sum = alternatingSum(x);
	cout << "The alternating sum of the number is: " << sum << endl;
	
	return 0;
}

int alternatingSum(int N)
{
	int M;
	int altSum = 0;
	for (M = 1; M <= N; M++)
	{
		if (M % 2 == 0)
		{
			altSum = altSum - M;
		}
		
		else 
		{
			altSum = altSum + M;
		}
	}
	return altSum;
}
