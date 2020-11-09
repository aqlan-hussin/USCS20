#include <iostream>
using namespace std;

int main() 
{
	int i, j;
	
	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "E ";
			for (j = 2; j <= i; j++)
			{
				cout << "D ";
				for (j = 3; j <= i; j++)
				{
					cout << "C ";
					for (j = 4; j <= i; j++)
					{
						cout << "B ";
						for (j = 5; j <= i; j++)
						{
							cout << "A ";
						}

					}

				}

			}
		cout << endl;
		
		}
	}
	
	return 0;
}