#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "";
	int age = 0;

	cout << "Enter your name: \n";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "\nYour name is: " << name << ".\nYour age is: " << age << ".";

	return 0;
}
