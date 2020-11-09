#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	int num, min, max;
	max = 0;
	min = 1000;

	ifstream inFile("Numbers.dat");

	if (inFile.fail())
	{
	     cout << "The file was not successfully opened" << endl;
	     exit (1);
	}

	inFile >> num;
	while (inFile.good())
	{
	     if (num < 0)
	          {
	               ofstream outFile("Number.dat");
                   outFile << num << " error";
	               outFile.close();
	          }
	     else
	          {
	               if (num > max)
	                   max = num;
                   else if (num < min)
                        min = num;
	          }
	     inFile >> num;
	   }

	   cout << "The largest number of the list is " << max << endl
	        << "The smallest number of the list is " << min << endl;

	   inFile.close();
	
	   return 0;
	}
