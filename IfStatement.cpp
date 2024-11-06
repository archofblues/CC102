#include <iostream>

using namespace std;

int main ()
{
	char choice;
	cout << "Is it raining today? [y/n]: ";
	cin >> choice;
	if (choice == 'y') {
		cout << "Get an umbrella";
	}
		else if (choice == 'n') {
			cout << "It is sunny.";
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}