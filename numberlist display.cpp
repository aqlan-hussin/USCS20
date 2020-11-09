#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	int posnum, negnum;
	ifstream pos1("positive.txt");
	ifstream neg1("negative.txt");
	if (pos1.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	cout << endl << " Positive numbers: ";
	pos1 >> posnum;
	while (pos1.good())
	{
		cout << posnum << " ";
		pos1 >> posnum;
	}
	if (neg1.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	cout << endl << " Negative numbers: ";
	neg1 >> negnum;
	while (neg1.good())
	{
		cout << negnum << " ";
		neg1 >> negnum;
	}
	cout << endl;
	pos1.close();
	neg1.close();
	return 0;
}