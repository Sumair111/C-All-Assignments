// Take input in integer from user and print sum of them.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    char op;
    int Numberone;
    int Numbertwo;
    cout << "I am Calculater of 19th century...with + - / % * operaters..i work pretty good and fast... " << endl;
    cout << "Write The Numbers plz : " << endl;
    cin >> Numberone; 
    cin >> Numbertwo;
    cout << "Enter The Operater";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << Numberone <<"+" << Numbertwo<< " = " << Numberone + Numbertwo;
        break;

    case '-':
        cout << Numberone << "-" << Numbertwo<<" = "<<  Numberone - Numbertwo;
        break;
    case '/':
        cout << Numberone << "/" << Numbertwo<<" = " << Numberone / Numbertwo;
        break;
    case '*':
        cout << Numberone << "*" << Numbertwo<< " = "<< Numberone * Numbertwo;
        break;
    case '%':
        cout << Numberone << "%" << Numbertwo << " = "<< Numberone % Numbertwo;
          
        break;


            
        default:
        cout << "Syntax Erorr";
        break;
    }
    
    
    
 

   /* cout << "Enter the first number/n...:" << endl;
    cin >> Numberone;
    cout << "Enter the second number/n....: "<<endl ;
    cin >> Numbertwo;
    cout << "NOW WHat TO Want to do with both numbers?...:"<< endl; 
    int Multiplication = Numberone * Numbertwo;
    int division = Numberone / Numbertwo;
    int Addition = Numberone + Numbertwo;
    int Subtraction = Numberone - Numbertwo;
    int modulus = Numberone % Numbertwo;
    cout << "What do you want to do with tow numbers now?" << endl;
    cout << "Here is your answer : " << Addition;*/
  

    
    
       



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
