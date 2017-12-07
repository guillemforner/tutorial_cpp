#include <iostream>
#include <string>
#include <cmath>
#include "MyMathFunctions.h"

using namespace std;

int getPosInt(string msg)
{
	int num = 0;

	do{
		cout << msg << endl;
		cin >> num;
	}while(num <= 0);

	return num;
}

double areaOfCircle(int r)
{
	return PI * pow((double)r, 2.0);
}

double volOfSphere(int r)
{
	return 4/3.0 * PI * pow((double)r, 3.0);
}

