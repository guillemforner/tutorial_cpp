#include <iostream>
#include "VPet.h"
using namespace std;

int main()
{
	VPet bob(150, false);
	bob.feedPet(25);

	VPet sam;
	sam.feedPet(10);

	cout << "Bob weights: " << bob.getWeight() << endl;
	cout << "Sam weights: " << sam.getWeight() << endl;

	if(bob.getHungry())
	{
		cout << "Bob is hungry." << endl;
	}
	else
	{
		cout << "Bob is not hungry." << endl;
	}

	return 0;
}

