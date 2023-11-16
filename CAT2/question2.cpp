#include <iostream>
using namespace std;

int main() 
{
    // Declare variables
    int year;

    // Get user input
    cout<< "Enter a year: ";
    cin>> year;

    // Check if it's a leap year
    if (year % 4 == 0 )
    {
        cout << year << " is a leap year.";
    } else {
        cout << year << " is not a leap year.2";
    }
    return 0;
}
