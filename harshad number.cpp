#include <iostream>
using namespace std;

bool isHarshad(int number) {
    int sumOfDigits = 0;
    int temp = number;

    // Calculate sum of digits
    while (temp != 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }

    // Check if the number is divisible by the sum of its digits
    return number % sumOfDigits == 0;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a Harshad number
    if (isHarshad(number)) {
        cout << number << " is a Harshad number." << endl;
    } else {
        cout << number << " is not a Harshad number." << endl;
    }

    return 0;
}
