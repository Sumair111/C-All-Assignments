#include <iostream>
using namespace std;

int main()
{
    //FOR LOOPS
    /* Syntax = (initialization; condition; updation)
     i.e = for(int i=0 ; i<100 ;i++ */

     // WHILE LOOPS
     /* Sytax = while (condition)
      {
     cout<<Variable;
      Variable++ or Variable--
     }*/
     //DO-While Loops
     /*
     do{
     cout<<Variable;
     Increment Or Decrement
     }
     while(Condition);

     */



     //Write a C program to print all natural numbers from 1 to 100.
     //- using For loop
    int NaturalNumbers = 1;
    for (NaturalNumbers = 1; NaturalNumbers <= 100; NaturalNumbers++)
        cout << NaturalNumbers << endl;
    //Write a C program to print all natural numbers from 1 to 100.
   //- using While loop
    int Naturalnumbers = 1;
    while (Naturalnumbers <= 100) {
        cout << Naturalnumbers << endl;
        Naturalnumbers++;
    }

    //Write a C program to print all natural numbers from 1 to 100.
   //- using  Do-While loop
    int naturalnumbers = 1;
    do {
        cout << naturalnumbers << endl;
        naturalnumbers++;
    } while (naturalnumbers <= 100);
}

