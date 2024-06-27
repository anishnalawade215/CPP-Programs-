//write a program in cpp to describe the length of the array without using inbuilt function.

//Example 1: Fixed-Size Array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    cout << "The length of the array is: " << length << endl;

    return 0;
}


//Example 2: Dynamically Allocated Array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate an array of size n
    int* arr = new int[n];

    // Example: Initialize the array with some values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print the length of the array
    cout << "The length of the array is: " << n << endl;

    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;

    return 0;
}
