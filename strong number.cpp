#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    return fact;
}

// Function to check if a number is a strong number
bool isStrong(int number) {
    int originalNumber = number;
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    return sum == originalNumber;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a strong number
    if (isStrong(number)) {
        cout << number << " is a strong number." << endl;
    } else {
        cout << number << " is not a strong number." << endl;
    }

    return 0;
}
