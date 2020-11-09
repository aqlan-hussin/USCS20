#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "cargas.dat";
	int carNum, totalMiles = 0; 
	int totalGas = 0;
	int totalMPG = 0;
	double miles, gas, mpg, average;
	
	ifstream inFile;
	
	inFile.open(filename.c_str());
	
	if (inFile.fail())
	{
		cout << "\nThe file was not successfully opened"
			 << "\n Please check that the file currently exists."
			 << endl;
		exit(1);
	}
	
	inFile >> carNum >> miles >> gas;
	while (inFile.good())
	{
		mpg = miles / gas;
		totalMiles = totalMiles + miles;
		totalGas = totalGas + gas;
		totalMPG = totalMPG + mpg;
		cout << fixed << setw(2) << carNum
			 << fixed << setw(8) << setprecision(2) << miles
			 << fixed << setw(6) << setprecision(2) << gas 
			 << fixed << setw(6) << setprecision(2) << mpg << endl;
		inFile >> carNum >> miles >> gas;
	}
	
	average = totalMPG / 5.0;
	
	cout << endl << totalMiles << " " << totalGas << " " << fixed << setprecision(2) << average;
	
	inFile.close();
	
	return 0;
}