##include <iostream>
using namespace std;

int main() {
    int size = 6;
    char symbol1;
    char symbol2;
     char symbol3;

    cout << "Enter Symbol 1: ";
    cin >> symbol1;
    cout << "Enter Symbol 2: ";
    cin >> symbol2;
    cout << "Enter Symbol 3: ";
    cin >> symbol3;

    cout << endl;

    for (int i = 0; i <= size; i++) {
        for (int j = 0; j < i; j++) {
            cout << symbol1;
        }
        cout << symbol2 << endl;
    }

    for (int i = size; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << symbol1;
        }
        cout << symbol2 << endl;
    }

    cout << symbol2 << endl;

    return 0;
}