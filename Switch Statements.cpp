// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{ //Calculater of multiply,divide ,add,subtract ,modulus

    char operater;
    int number1, number2, number3;
   
        
    cout<<"//------------------------------\\" << endl;
    cout << "Enter the first number..: "<< endl;
        cin >> number1;
        cout << "Enter the 2nd number...: " << endl;
        cin >> number2;
        cout << "Enter the 3rd number...: " << endl;
        cin >> number3;
        cout << "What do you want to do with theses three numbers.../n Write the operater i mean " << endl;
        cin >> operater;
        
        switch (operater) {

        case '+':
            cout << number1 + number2 - number3 << endl;
            break;
       case '-':
            cout << number1 - number2 - number3 << endl;
            break;
        case '/':
            cout << number1 / number2 / number3 << endl;
            break;
        case '*':
            cout << number1 * number2 * number3 << endl;
            break;
        case '%':
            cout << number1 % number2 % number3 << endl;
            break;
        default :
            cout << "Syntax Error";
            break;
             

        }




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
