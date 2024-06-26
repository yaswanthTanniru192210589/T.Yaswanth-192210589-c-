#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the number of terms for Fibonacci series
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;
    
    int first = 0, second = 1;
    
    cout << "Fibonacci series up to " << n << " terms:\n";
    
    // Print the first two terms
    cout << first << " " << second << " ";
    
    // Generate Fibonacci series using for loop
    for (int i = 2; i < n; ++i) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    
    cout << endl;
    
    return 0;
}
