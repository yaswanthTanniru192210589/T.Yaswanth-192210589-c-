#include <iostream>
using namespace std;

bool isPrime(int number) {
    // Prime numbers are greater than 1
    if (number <= 1)
        return false;

    // Check divisibility by numbers from 2 to number-1
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0)
            return false;
    }

    // If no divisor found, it's prime
    return true;
}

int main() {
    int n;

    // Input
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:\n";

    // Check for prime numbers using for loop
    for (int i = 2; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
