#include <iostream>
using namespace std;

int main() 
{
	int num, i, j;
	
	cout << "Please enter any number between 1 and 20: ";
	cin >> num;
	
	if (num <= 20 && num >= 1)
	{
		{
			for (i = 1; i <= num; i++)
			{
				for (j = 1; j <= num; j++)
				{
					if (i == j)
						cout << "0 ";
					else
						cout << "# ";	
					
				}
				cout << endl;
			}
		}
	}
	else 
	{
		cout << "The number is not in the range";
	}
	
	return 0;
}