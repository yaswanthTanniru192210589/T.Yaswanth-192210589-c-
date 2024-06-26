#include <iostream>
using namespace std;

// Function to display the array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific position in the array
void insertElement(int arr[], int& size, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > size) {
        cout << "Invalid position." << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position] = element;
    size++;
}

int main() {
    int size, element, position;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Input the element to insert
    cout << "Enter the element to insert: ";
    cin >> element;

    // Input the position to insert the element
    cout << "Enter the position to insert the element: ";
    cin >> position;

    // Insert the element at the specified position
    insertElement(arr, size, element, position);

    // Display the modified array
    displayArray(arr, size);

    return 0;
}
