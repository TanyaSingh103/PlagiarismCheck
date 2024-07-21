#include <iostream>
using namespace std;

// Function to calculate factorial iteratively
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;
    cout << "Enter a non-negative integer to calculate its factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        unsigned long long fact = factorial(number);
        cout << "Factorial of " << number << " = " << fact << endl;
    }

    return 0;
}
