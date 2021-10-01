
#include <iostream>
using namespace std;

int main()
{



    //For Loops\
/* Syntax = (initialization; condition; updation)
 i.e = for(int i=0 ; i<100 ;i++ */

 // WHILE LOOPS
 /* Sytax = while (condition)
  {
 cout<<Variable;
  Variable++ or Variable--
 }
 */
 //DO-While Loops
 /*
 do{
 cout<<Variable;
 Increment Or Decrement
 }
 while(Condition);

 */
 //Write a C program to print all natural numbers in reverse (from 100 to 1). 
 //- using for loop
    int NaturalNumbers = 100;
for (NaturalNumbers = 100; NaturalNumbers >= 1; NaturalNumbers--)
cout << NaturalNumbers << endl;
//Write a C program to print all natural numbers in reverse (from 100 to 1). 
//- using for loop

int Naturalnumbers = 100;
while (Naturalnumbers >= 1) {
    cout << Naturalnumbers << endl;
    Naturalnumbers--;
}
//Write a C program to print all natural numbers in reverse (from 100 to 1). 
//- using do-while loop
int naturalnumbers = 100;
do {
    cout << naturalnumbers << endl;
    naturalnumbers--;
} while (naturalnumbers >= 1);


    }

