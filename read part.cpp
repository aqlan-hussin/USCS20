#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "part.dat";
	string part;
	int initial, sold, min, balance, amount;
	
	ifstream inFile;
	
	inFile.open(filename.c_str());
	
	if (inFile.fail())
	{
		cout << "\nThe file was not successfully opened"
			 << "\n Please check that the file currently exists."
			 << endl;
		exit(1);
	}
	
	inFile >> part >> initial >> sold >> min;
	while (inFile.good())
	{
		balance = initial - sold;
		amount = min - balance;
		cout << fixed << setw(5) << part
			 << fixed << setw(6) << balance
			 << fixed << setw(6) << amount << endl;
		inFile >> part >> initial >> sold >> min;
	}
	
	inFile.close();
	
	return 0;
}