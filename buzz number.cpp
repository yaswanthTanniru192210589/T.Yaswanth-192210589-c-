#include <iostream>
using namespace std;

bool isBuzz(int number) {
    return (number % 7 == 0) || (number % 10 == 7);
}

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a Buzz number
    if (isBuzz(number)) {
        cout << number << " is a Buzz number." << endl;
    } else {
        cout << number << " is not a Buzz number." << endl;
    }

    return 0;
}
