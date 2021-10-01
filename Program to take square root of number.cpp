// Program to take square root of number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num , num2 ,num3 ;
	cout << "Enter the numbers..: " << endl;
	cin >> num>>num2>>num3;
	int answer = sqrt(num);
	int answer2 = sqrt(num2);
	int answer3 = sqrt(num3);
	cout << "Here is your 1stAnswer :" << answer << endl;
	cout << "Here is your 1stAnswer :" << answer2 << endl;
	cout << "Here is your 1stAnswer :" << answer3 << endl;
	
// why i have to take separate square root of every numer
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
