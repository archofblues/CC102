#include <iostream>
using namespace std;

int main() {
    int rows = 8;
    int cols = 8;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if ((i + j) % 2 == 0) {
                cout << "#";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
