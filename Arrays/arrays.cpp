#include <iostream>

using namespace std;

int main()
{
	double rainfall[5];

	rainfall[0] = 2.3;
	rainfall[1] = 0.3;
	rainfall[2] = 0.0;
	rainfall[3] = 4.1;
	rainfall[4] = 0.5;

	for(int i = 0; i < 5; i++)
	{
		cout << rainfall[i] << endl;
	}

	for(int i = 0; i < 5; i++)
	{
		cout << "Enter a rainfall amount: ";
		cin >> rainfall[i];
	}

	for(int i = 0; i < 5; i++)
	{
		cout << rainfall[i] << endl;
	}

}
