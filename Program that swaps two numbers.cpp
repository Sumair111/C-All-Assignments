// Program that swaps two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  //Using Third Variable

    int a = 10, b = 100, temp;
    int c = 20;
    int d = 30;
    int e = 5, f = 10;
  
    cout << "Befor swappping : " << "A  = " << a << " And  B = " << b << endl;
    cout << "Now" << endl;
    temp = a;
   a = b ;
    b = temp;
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl; 
    //Questions 
    

    //Without using third variable

    cout << "Befor swappping : " << "C = " << c << " And  D = " << d << endl;
    cout << "Now" << endl;
    c = c + d; // 30+ 20=50
    d = c - d;//50-30 = 20
    c = c - d; //50-20 =30
    cout << "After Swapping : " << "C = " << c << " And  D = " << d << endl;

    //By using division and multiplication

    

    // using multiplication and division for swapping
   
    cout << "Befor swappping : " << "E = " << e << " And  F = " << f << endl;
    cout << "Now" << endl;
    e = e * f;    // e = 50
    f = e/ f;    // f = 5
    e= e / f;    // e = 10
    cout << "After Swapping : " << "E = " << e << " And  F = " << f << endl;


    //Practic
    //Swap 50 30;
    int g = 50;
    int h = 30;
     int Swapper;
     cout << "Befor swappping : " << "G = " << g << " And  H = " << h << endl;
     cout << "Now" << endl;
     Swapper = g;// swapper =50
     g = h; //g =30 now
     h = Swapper; //h = 50
     cout << "After swapping : " << "G = " << g << " And  H = " << h << endl;

     //Without using third variable 
     /* g = g+h; 80
        h = g-h; 50
        g = g-h; 30 */
      
    //Multiplication division trick
     /*
      g = g*h; 1500
      h = g/h; 50
      g = g/h;30
     
     */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
