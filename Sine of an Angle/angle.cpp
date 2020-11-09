#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.142;
	const double Deg_To_Rad = PI/180;
	double angle;
	
	cout << "Enter angle (in degrees): ";
	cin >> angle;
	cout << setiosflags (ios:: fixed)
		 << setiosflags (ios::showpoint)
		 << setprecision (4)
		 << "The sine of the angle is " << sin(angle * Deg_To_Rad)
		 << endl;
		
	return 0;
}