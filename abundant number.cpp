#include <iostream>
using namespace std;

bool isAbundant(int number) {
    int sumOfDivisors = 0;

    // Calculate sum of proper divisors
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sumOfDivisors += i;
        }
    }

    // Check if the sum of proper divisors is greater than the number
    return sumOfDivisors > number;
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is an abundant number
    if (isAbundant(number)) {
        cout << number << " is an abundant number." << endl;
    } else {
        cout << number << " is not an abundant number." << endl;
    }

    return 0;
}
