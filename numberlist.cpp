#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "numberList.txt";
	ofstream outFile;
	
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
	
	outFile << 100 << " " << 250 << " " << -50 << " " << 32 << " " << 276 << " " << 10 << " " << 2 << " " << 22 << " " << -60
			<< " " << -24 << " " << 37 << " " << -52 << " " << 183;
			
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		
	return 0;
}