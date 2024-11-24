#include <iostream>

using namespace std;

int main() {
    int age;
    char parents;
    double money;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with your parents? [y=Yes/n=No]: ";
    cin >> parents;
    cout << "Enter the amount of money you have: ";
    cin >> money;
    if (age < 13) {
        cout << "You can see G.";
        if (parents == 'y') {
            cout << " You can also see PG." << endl;
        } else {
            cout << endl;
        }
    } else if (age >= 13 && age < 16) {
        cout << "You can see G, PG." << endl;
    } else {
        cout << "You can see G, PG, R." << endl;
    }

    if (money == 7.50) {
        cout << "You can attend Matinee." << endl;
    } else if (money == 10.50) {
        cout << "You can attend Evening." << endl;
    } else {
        cout << "You don't have enough money for a ticket." << endl;
    }

    return 0;
}