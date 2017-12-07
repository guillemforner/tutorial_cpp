#include <iostream>
#include "MyMathFunctions.h"
using namespace std;

int main()
{
	int radius = getPosInt("Enter a positive integer for the radius of a circle/sphere: ");

	double aCircle = areaOfCircle(radius);

	double vSphere = volOfSphere(radius);

	cout << "The area of a circle that has a radius of " <<
			radius << " is " << aCircle << "." << endl;
	cout << "The volume of a sphere that has a radius of " <<
			radius << " is " << vSphere << "." << endl;

	return 0;
}

