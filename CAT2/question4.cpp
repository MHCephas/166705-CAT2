#include <iostream>
using namespace std;

int main()
{ char letter;
    cout<< "Enter a letter: ";
    cin>> letter;

    if(letter == A|| letter == E) {
        cout<< "The letter is a vowel";
    }else{
        cout<<"The letter is a consonant";
    }
return 0;
}