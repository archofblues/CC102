#include <iostream>
using namespace std;

int main() {
    int size = 8;
    for (int i = size; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
