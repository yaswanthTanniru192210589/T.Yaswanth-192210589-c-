#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int remainder;

    // Keep calculating remainder until b becomes 0
    do {
        remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);

    return a; // GCD will be stored in 'a'
}

int main() {
    int num1, num2;

    // Input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate GCD using do-while loop
    int result = gcd(num1, num2);

    // Output
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
