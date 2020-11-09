#include <iostream>
using namespace std;

int main() 
{
	const int stop = -1;
	int count, scores, total;
	double average;
	total = 0;
	count = 0;
	
	while (scores != stop)
		{
			total = total + scores;
			cout << "Please enter the student's score: ";
			cin >> scores;
			count++;
		}
	
	count--;
	average = total/count;
	cout << "The average of the class test scores is " << average << endl;
	
	return 0;
}