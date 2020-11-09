#include <iostream>
using namespace std;

int main() 
{
	int i;
	
	cout << "N\t10*N\t100*N\t1000*N" << endl << endl;
	
	for (i = 1; i <= 5; i++)
	{
		cout << i << "\t" << 10*i << "\t\t" << 100*i << "\t\t" << 1000*i << endl;
	}
	
	return 0;
}