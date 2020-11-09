#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() 
{
	int num, posnum, negnum;
	ifstream list("numberList.txt");
	ofstream pos1("positive.txt");
	ofstream neg1("negative.txt");
	
	if (list.fail())
	{
		cout << "The file was not successfully opened";
		exit(1);
	}
	
	cout << "Number list: ";
	list >> num;
	while (list.good())
	{
		cout << num << " ";
		if (num > 0)
		{
			pos1 << num << " ";
		}
		
		else
		{
			neg1 << num << " ";
		}
		
		list >> num;
	}
	
	list.close();
	pos1.close();
	neg1.close();
	
	ifstream pos2("positive.txt");
	
	cout << endl << " Positive Numbers: ";
	pos2 >> posnum;
	while (pos2.good())
	{
		cout << posnum << " ";
		pos2 >> posnum;
	}
	
	ifstream neg2("negative,txt");
	
	cout << endl << " Negative Numbers: ";
	neg2 >> negnum;
	while (neg2.good())
	{
		cout << negnum << " ";
		neg2 >> negnum;
	}
	
	cout << endl;
	pos2.close();
	neg2.close();
	
	return 0;
}