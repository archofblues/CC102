#include <iostream>

using namespace std;

int main ()
{
	int age;
	cout << "What is your age?";
	cin >>age;
	if (age < 16) {
	cout << " You are too young to drive.";
	}
	else if ( age == 16) {
	cout << "You better clear the road.";
	}
	else if (  age > 16) {
	cout << "You are getting pretty old.";
	}
	return 0;
}