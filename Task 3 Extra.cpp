#include <iostream>
using namespace std;

int main()
{

    // Write a C program to print all alphabets from z to a. 
      //using for loop
    char Reverse = 90;
    for (char Reverse = 90; Reverse >= 60; Reverse--) {
        cout << Reverse << "\n";
    }

    //  Write a C program to print all alphabets from z to a. 
    //  using while loop
    char reverse = 90;
    while (reverse >= 60) {
        cout << reverse << "\n";
        reverse--;
    }
    //  Write a C program to print all alphabets from z to a. 
  //  using do-while loop
    char REVERSE = 90;
    do
    {
        cout << REVERSE;
        REVERSE--;

    } while (REVERSE >= 60);

}

