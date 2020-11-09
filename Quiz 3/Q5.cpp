#include <iostream>
using namespace std;

int main() 
{
	int total, count, grade;
	double average;
	
	total = 0;
	count = 1;
	
	while (count <= 10)
	{
		cout << "Please enter the grade: ";
		cin >> grade;
		total = total + grade;
		count++;
	}
	
	average = total / 10.0;
	cout << "The average is " << average;
}