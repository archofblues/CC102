#include <iostream>

using namespace std;

int main ()
{
	int age;
	char parents;
	double money;
	cout << "Enter your age?";
	cin >>age;
	cout << "Are you with your parents? [y=Yes/n=No]";
	cin >>parents;
	cout << "Enter the amount of money you have:";
	cin >> money;
	if (age < 13 && parents =='n') {
		cout << "You can see G.";
	}
		if (parents =='y'){
	cout << " You can see G,PG.";
		}
	if (money ==7.50){
		cout <<"You can attend Matinee." << endl;
	}
	if (money == 10.50) {
		cout <<"You can attend Evening." << endl;
	}
	else if (age < 13 && age < 16 && parents =='n') {
		cout << "You can see G,PG.";
	}
	else if (parents =='y'){
	cout << " You can see G,PG, R.";
	}
	else if (money ==7.50){
		cout <<"You can attend Matinee." << endl;
	}
	else if (money == 10.50) {
		cout <<"You can attend Evening." << endl;
	}
	else if (age >= 16 && parents =='n') {
		cout << "You can see  G, PG, R";
	}
	else if (parents =='y'){
	cout << " You can see G, PG, R.";
	}
	else if (money ==7.50){
		cout <<"You can attend Matinee." << endl;
	}
	else if (money == 10.50) {
		cout <<"You can attend Evening." << endl;
	}
	return 0;
}