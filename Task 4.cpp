#include <iostream>
using namespace std;


int main()
{
    // +=i.e 2,3 or any number for more than one incremet
    //Write a C program to print all even numbers between 1 to 100. - using for loop
       // --HINT : Even Number wo hota jo 2 par pura pura divide hu jae

    int number = 2;
    for (int number = 2; number <= 100; number += 2) {
        cout << number << endl;
    }

    //Write a C program to print all even numbers between 1 to 100. - using while loop
    int Number = 2;
    while (Number <= 100) {
        cout << Number << endl;
        Number += 2;
    }
    //Write a C program to print all even numbers between 1 to 100. - using  do-while loop
    int NumbeR = 2;
    do {
        cout << NumbeR << endl;
        NumbeR += 2;
    } while (NumbeR <= 100);

}