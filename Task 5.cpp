#include <iostream>
using namespace std;


int main()
//.Write a C program to print all odd number between 1 to 100. using while loop
//--HINT : Even Number wo hota jo 2 par pura pura divide na hu
{
    int oddnumber = 1;
    for (oddnumber = 1; oddnumber < 100; oddnumber += 2) {
        cout << oddnumber;

    }

    //.Write a C program to print all odd number between 1 to 100. using while loop

    int Oddnumber = 1;
    while (Oddnumber <= 100) {
        cout << Oddnumber << endl;
        Oddnumber += 2;
    }
    //.Write a C program to print all odd number between 1 to 100. using  do-while loop
    int ODDnumber = 1;
    do {
        cout << ODDnumber << endl;
        ODDnumber += 2;

    } while (ODDnumber <= 100);
}

