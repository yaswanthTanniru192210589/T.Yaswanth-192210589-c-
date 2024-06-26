#include <iostream>
using namespace std;

// Function to reverse the elements in an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move start index forward and end index backward
        start++;
        end--;
    }
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printArray(arr, size);

    return 0;
}
