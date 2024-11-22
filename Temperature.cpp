#include <iostream>

using namespace std;

int main ()
{
	char answer;
	cout << "Is the temperature less than 32 degrees or between 32-50 degrees or over? [y=yes,b=between,o=over]:";
	cin >> answer;
	if(answer == 'y'){
		cout << "Bring a heavy jacket.";
	}
	else if(answer == 'b'){
		cout << "Bring a light jacket.";
	}
	else if(answer == 'o'){
		cout << "Don't bring any jacket.";
	}
		else {
			cout << "Invalid input.";
	}
	return 0;
}