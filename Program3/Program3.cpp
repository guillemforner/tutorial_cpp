//Problem Statement:

#include <iostream>
#include <string>

using namespace std;

int main()
{

	//Get the name of the movie
	string movie = "";

	cout << "What is the name of the movie: \n";
	getline(cin, movie);

	//Get the metascore
	int metascore = 0;
	cout << "What is the meatscore rating for " << movie << "?\n";
	cin >> metascore;

	//Get the Tomatometer score
	int tomatometer = 0;
	cout << "What is the Tomatometer rating for " << movie << "?\n";
	cin >> tomatometer;

	//Calculate the average
	double avg = (metascore + tomatometer) / 2.0;

	//Rescale average
	double rescaledScore = avg / 10;

	//Display the results of our calculation
	cout << "Our calculated average on a 10 point scale for "
			<< movie << " is " << rescaledScore << ".";

	return 0;
}
