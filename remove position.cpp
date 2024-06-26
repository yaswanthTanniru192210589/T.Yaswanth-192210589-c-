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

// Function to delete an element at a specific position in the array
void deleteElement(int arr[], int& size, int position) {
    // Check if the position is valid
    if (position < 0 || position >= size) {
        cout << "Invalid position." << endl;
        return;
    }

    // Shift elements to the left to fill the gap left by the deleted element
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int size, position;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Input the position of the element to delete
    cout << "Enter the position of the element to delete: ";
    cin >> position;

    // Delete the element at the specified position
    deleteElement(arr, size, position);

    // Display the modified array
    displayArray(arr, size);

    return 0;
}
