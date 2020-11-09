#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "part.dat";
	ofstream outFile;
	
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
			
	outFile << "QA310" << "\t" << 95 << "\t" << 47  << "\t" << 50 << endl
			<< "CM145" << "\t" << 320 << "\t" << 162 << "\t" << 200 << endl
			<< "MS514" << "\t" << 34 << "\t" << 20 << "\t" << 25 << endl
			<< "EN212" << "\t" << 163 << "\t" << 150 << "\t" << 160 << endl;
			
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		
	return 0;
}