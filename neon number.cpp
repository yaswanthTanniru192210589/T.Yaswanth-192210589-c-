#include <iostream>
using namespace std;

bool isNeon(int number) {
    int square = number * number;
    int sumOfDigits = 0;

    // Calculate sum of digits of square
    while (square != 0) {
        sumOfDigits += square % 10;
        square /= 10;
    }

    // Check if sum of digits of square equals original number
    return sumOfDigits == number;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a Neon number
    if (isNeon(number)) {
        cout << number << " is a Neon number." << endl;
    } else {
        cout << number << " is not a Neon number." << endl;
    }

    return 0;
}
