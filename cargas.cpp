#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "cargas.dat";
	ofstream outFile;
	
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
			
	outFile << 54 << "\t" << 250 << "\t" << 19 << endl
			<< 62 << "\t" << 525 << "\t" << 38 << endl
			<< 71 << "\t" << 123 << "\t" << 6 << endl
			<< 87 << "\t" << 1322 << "\t" << 86 << endl
			<< 97 << "\t" << 235 << "\t" << 14 << endl;
			
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		
	return 0;
}