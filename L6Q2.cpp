#include <iostream>
using namespace std;

int main() 
{
	const int MAXI = 5;
	const int MAXJ = 4;
	int i, j;
	
	for (i = 1; i <= MAXI; i++)
	{
		cout << "\ni is now " << i << endl;
		
		for (j = 1; j <= MAXJ; j++)
			cout << "	j = " << j;
	}
	cout << endl;
	
	return 0;
}