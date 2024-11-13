#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is it raining? [y=yes,n=no]:";
	cin >> answer;
	if(answer == 'y'){
		cout << "Get an umbrella." << endl;
		cout << "Rainfall Warning[r=red, o=orange, y=yellow]:";
		cin >> answer;
	}
		if(answer =='r') {
			cout << "Extreme: Landslide and Flooding are imminent.";
		}
		else if(answer =='o') {
			cout << "Serious: Expected Flooding.";
		}
		else if(answer =='y') {
			cout << "Moderated: Possible Flooding.";
		}
		else {
			cout << "Invalid input.";
		}
	return 0;
}