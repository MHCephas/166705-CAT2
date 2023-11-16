#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int limit, number;

    // Get user input for the limit
    cout << "Enter the limit: ";
    cin >> limit;

    // Print prime numbers up to the specified limit
    cout << "Prime numbers up to " << limit << " are: ";
    for (int number = 2; number <= limit; ++number) {
        if (number % 2 == 1 ) {
            cout << number << " ";
        }
    }

    return 0;
}
