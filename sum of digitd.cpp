#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Input
    cout << "Enter a number: ";
    cin >> n;

    // Calculate sum of digits using while loop
    int originalNumber = n;
    while (n != 0) {
        int digit = n % 10; // Extract the last digit
        sum += digit; // Add the last digit to sum
        n /= 10; // Remove the last digit
    }

    // Output
    cout << "Sum of digits of " << originalNumber << " = " << sum << endl;

    return 0;
}
