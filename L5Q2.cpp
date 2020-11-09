#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int gal;
	double liters;
	
	cout << "Gallons" << "\t\t" << "Liters" << endl;	
	for (gal = 10; gal <=20; gal++)
	{
		liters = 3.785 * gal;
		cout << fixed << setprecision(3) << gal << "\t\t\t" << liters << endl;
	}
	return 0;
}