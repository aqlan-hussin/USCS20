// This program determines the weight of a steel cylinder
//   by multiplying the volume of the cylinder times its density.
// The volume of the cylinder is given by the formula PI * pow(radius,2) * height.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.1416;
	const double DENSITY = 0.284;
	double radius, height, weight;
	
	cout << "Enter the radius of the cylinder (in inches): ";
	cin >> radius;
	cout << "Enter the height of the cylinder (in inches): ";
	cin >> height;
	weight = DENSITY * PI * pow(radius,2) * height;
	cout << setiosflags(ios:: fixed)
		 << setiosflags(ios::showpoint)
		 << setprecision(4)
		 << "The cylinder weighs " << weight << " pounds" << endl;
		
	return 0;
}