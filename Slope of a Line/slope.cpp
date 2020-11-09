#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	double slope;
	
	x1 = 3;
	x2 = 8;
	y1 = 7;
	y2 = 12;
	slope = (y2-y1)/(x2-x1);
	
	cout << setw(6) << fixed << setprecision(2)
		 << "The value of the slope is " << slope;
	
	return 0;
}
