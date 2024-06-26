#include <iostream>
using namespace std;

// Function with default arguments
void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    // Calling the function with default argument
    cout << "Printing default message: ";
    printMessage();

    // Calling the function with a custom argument
    cout << "Printing custom message: ";
    printMessage("This is a custom message.");

    return 0;
}
