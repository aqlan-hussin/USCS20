#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
	string filename = "hours.dat";
	ofstream outFile;
	
	outFile.open(filename.c_str());
	
	if (outFile.fail())
	{
		cout << "The file was not successfully opened" << endl;
		exit(1);
	}
			
	outFile << fixed << setw(12) << setiosflags(ios::left) << "B.Caldwell " 
			<< fixed << setw(15) << " 555-88-2222 " 
			<< fixed << setw(7) << setprecision(2) << 7.32 
			<< fixed << setw(5) << 37 << endl
			<< fixed << setw(12) << setiosflags(ios::left) << "D.Memcheck " 
			<< fixed << setw(15) << " 555-77-4444 " 
			<< fixed << setw(7) << setprecision(2) << 8.32 
			<< fixed << setw(5) << 40 << endl
			<< fixed << setw(12) << setiosflags(ios::left) << "R.Potter " 
			<< fixed << setw(15) << " 555-77-6666 " 
			<< fixed << setw(7) << setprecision(2) << 6.54
			<< fixed << setw(5) << 40 << endl
			<< fixed << setw(12) << setiosflags(ios::left) << "W.Rosen " 
			<< fixed << setw(15) << " 555-99-8888 " 
			<< fixed << setw(7) << setprecision(2) << 9.80
			<< fixed << setw(5) << 35 << endl;
			
	outFile.close();
	cout << "The file " << filename
		 << " has been successfully written." << endl;
		
	return 0;
}