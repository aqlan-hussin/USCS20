#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "prices.dat";
	ofstream outFile;
	
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	
	outFile << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2);
			
	outFile << "Mats " << 39.95 << endl
			<< "Bulbs " << 3.22 << endl
			<< "Fuses " << 1.08 << endl;
			
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		
	return 0;
}