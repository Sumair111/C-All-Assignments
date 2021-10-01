// C++ Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
  //Trignometric Functions
    double y = 15.5;
    cout << sin(y) << endl;
    cout << cos(y) << endl;
    cout << tan(y) << endl;
    cout << sinh(y) << endl;
    cout << cosh(y) << endl;
    cout << tanh(y)<< endl;
    cout << atan(y)<< endl;
    cout << acos(y) << endl;
    cout << asin(y) << endl;
    cout << asinh(y) << endl;
    cout << acosh(y) << endl;
    cout << atanh(y) << endl;

  
    //USE OF MIN AND MAX
    int num1 = 5;
    int num2 = 4;
    cout << min(num1, num2) << endl;
    cout << max(num1, num2) << endl;
    

    //We Can Take Log and sqrt etc of numbers
    cout << sqrt(num1)<<endl;
    cout << log(num2) << endl;
    

    //Use of ceil and Fan
    cout << floor(y)<<endl;
    cout << ceil(y) << endl;

    //Use of libraries
        //1. Libraries have predefined functions that let us work fast and more appropriately
       // 2. Library Functions are called pre-defined functions
       // 3. such as <cmath.h> let us work with mathematics and trignometric functions too
       




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
