#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "hours.dat";
	string name, ssn;
	double rate, pay;
	int hours;
	
	ifstream inFile;
	
	inFile.open(filename.c_str());
	
	if (inFile.fail())
	{
		cout << "\nThe file was not successfully opened"
			 << "\n Please check that the file currently exists."
			 << endl;
		exit(1);
	}
	
	inFile >> name >> ssn >> rate >> hours;
	while (inFile.good())
	{
		pay = rate * hours;
		cout << fixed << setw(13) << setiosflags(ios::left) << name 
			 << fixed << setw(15) << ssn 
			 << fixed << setw(9) << setprecision(2) << pay << endl;
		inFile >> name >> ssn >> rate >> hours;
	}
	
	inFile.close();
	
	return 0;
}