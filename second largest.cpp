#include <iostream>
#include <climits>
using namespace std;

// Function to find the second largest element in an array
int secondLargest(int arr[], int size) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare an array of the given size
    int arr[size];

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Find the second largest element
    int secondMax = secondLargest(arr, size);

    if (secondMax == INT_MIN) {
        cout << "Second largest element does not exist." << endl;
    } else {
        cout << "Second largest element: " << secondMax << endl;
    }

    return 0;
}
