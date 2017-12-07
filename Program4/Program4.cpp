#include <iostream>
#include <string>

using namespace std;


int main()
{
	// Get seed color
	string seedColor = "";
	cout << "Enter the seed color (red or blue): \n";
	cin >> seedColor;

	if(seedColor != "red" && seedColor != "blue")
	{
		cout << "Invalid color selected. Program will terminate.\n";
		return 0;
	}

	// Get temp
	int temp = 0;
	cout << "Enter the temperature (F): \n";
	cin >> temp;

	// If red seed
	if(seedColor == "red")
	{
		// If temp >= 75
		if(temp >= 75)
		{
			// Get the soil moisture
			string soilMoisture = "";
			cout << "Enter the soil moisture (wet or dry): \n";
			cin >> soilMoisture;

			if(soilMoisture != "wet" && soilMoisture != "dry")
			{
				cout << "Invalid soil moisture selected. Program will terminate.\n";
				return 0;
			}

			// If the soil is wet
			if(soilMoisture == "wet")
			{
				// Output sunflower
				cout << "A sunflower will grow.\n";
			}
			// If the soil is dry
			else
			{
				// Output dandelion
				cout << "A dandelion will grow.\n";
			}
		}
		// Otherwise
		else
		{
			// Output mushroom
			cout << "A mushroom will grow.\n";
		}
	}
	// If blue seed
	else
	{
		// If temp is betweem 60 and 70
		if(temp >= 60 && temp <= 70)
		{
			// Get the soil moisture
			string soilMoisture = "";
			cout << "Enter the soil moisture (wet or dry): \n";
			cin >> soilMoisture;

			if(soilMoisture != "wet" && soilMoisture != "dry")
			{
				cout << "Invalid soil moisture was inputted. Program will terminate.\n";
				return 0;
			}

			// If the soil is wet
			if(soilMoisture == "wet")
			{
				// Output dandelion
				cout << "A dandelion will grow.\n";
			}
			// If the soil is dry
			else
			{
				// Output sunflower
				cout << "A sunflower will grow.\n";
			}
		}
		// Otherwise
		else
		{
			// Output mushroom
			cout << "A mushroom will grow.\n";
		}
	}

	return 0;
}
