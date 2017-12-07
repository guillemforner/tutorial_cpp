#include <iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "Enter an integer score between 0 - 100." << endl;
	cin >> score;

	if(score < 0 || score > 100)
	{
		cout << "An invalid score was inputted. Program will terminate." << endl;
		return 0;
	}

	if(score >= 90 && score <= 100)
	{
		cout << "Awesome!" << endl;
	}
	else if(score >= 80 && score <= 89)
	{
		cout << "Well Done." << endl;
	}
	else if(score >= 70 && score <= 79)
	{
		cout << "Average." << endl;
	}
	else if(score >= 60 && score <= 69)
	{
		cout << "Bummer." << endl;
	}
	else
	{
		cout << "Sad Times." << endl;
	}

	return 0;
}
