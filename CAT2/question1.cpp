#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;

    // Asking the user to input three numbers from the 
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout<< "Enter the third number: ";
    cin>> num3;

    // Determine the smallest number using switch-case
    char choice;
    if (num1 < num2 && num1 < num3) {
        choice = '1';
    } else if (num2 < num1 && num2 < num3) {
        choice = '2';
    } else if (num3 < num1 && num3 < num2){
        choice = '3';
    }else{
        choice = '0';  // The nuumbers are equal
    } 
// Applying switch case
    switch (choice) {
        case '1':
 cout << "The smallest number is: " << num1 << endl;
            break;
        case '2':
 cout << "The smallest number is: " << num2 << endl;
            break;
            case '3':
cout<< "The smallest number is: " << num3 << endl;
        case '0':
        break;
cout << "The numbers are equal." << endl;
            break;
    }
    return 0;

}