#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read input number from user

    int count = 0; // Initialize2 divisor count to 0

    for (int i = 1; i * i <= n; i++) { // Loop from 1 to sqrt(n) (i<=sqrt(n) by importing #include<cmath>)
        if (n % i == 0) { // If i is a divisor of n
            count++; // Increment count for the divisor i

            if ((n / i) != i) // If n/i is not the same as i (not a perfect square)
                count++; // Increment count for the divisor n/i
        }
    }

    if (count == 2) // If there are exactly 2 divisors (1 and n)
        cout << "The number is a prime number" << endl;
    else
        cout << "The number is not a prime number" << endl;

    return 0;
}
