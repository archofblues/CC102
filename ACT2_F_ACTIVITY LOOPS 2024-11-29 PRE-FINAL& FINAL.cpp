#include <iostream>
using namespace std;

int main() {
    int size = 10;
    char symbol1;
    char symbol2;
    char symbol3;

    cout << "Enter Symbol 1: ";
    cin >> symbol1;
    cout << "Enter Symbol 2: ";
    cin >> symbol2; 
    cout << "Enter Symbol 3: ";
    cin >> symbol3;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) { 
            if (j == i) {
                cout << " ";
            } else {
                cout << symbol1;
            }
        }
        cout << endl;
    }

    return 0;
}