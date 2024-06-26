#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input the number of rows (must be odd)
    cout << "Enter the number of rows for the diamond pattern (must be odd): ";
    cin >> rows;

    if (rows % 2 == 0) {
        cout << "Number of rows must be odd." << endl;
        return 1;
    }

    // Upper part of the diamond
    for (int i = 1; i <= rows; i += 2) {
        // Print spaces before stars
        for (int j = 0; j < (rows - i) / 2; ++j) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower part of the diamond
    for (int i = rows - 2; i >= 1; i -= 2) {
        // Print spaces before stars
        for (int j = 0; j < (rows - i) / 2; ++j) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
