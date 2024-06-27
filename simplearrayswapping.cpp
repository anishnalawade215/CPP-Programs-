//write a program to swap the two numbers without using the third variable

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swapping using arithmetic operations
    a = a + b; // Step 1
    b = a - b; // Step 2
    a = a - b; // Step 3

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
