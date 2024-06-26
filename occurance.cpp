#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, value;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value to count occurrences: ";
    cin >> value;

    int occurrences = countOccurrences(arr, size, value);

    cout << "Number of occurrences of " << value << " in the array: " << occurrences << endl;

    return 0;
}
