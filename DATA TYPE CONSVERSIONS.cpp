// DATA TYPE CONSVERSIONS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string.h>
int main()
{
	//string to int


/*string number = "45";
int stringintoint = stoi(number);
cout<< stringintoint;*/


//int to string
	int number = 14;
	string inttostring = to_string(number);
	cout << inttostring;


	//string to int in a complex way
	string number = "51", number2 = "49";
	int stringtoint1st = stoi(number), stringtoint2nd = stoi(number2);
	int sum = stringtoint1st * stringtoint2nd;
	cout << sum << endl;

	//int ot string in a complex way
	string answer = to_string(sum);
	cout << answer;


	//float to string
	float decimalnumber = 4.55;
	string floattostring = to_string(decimalnumber);
	cout << floattostring << endl;


	//string to float
	float stringintofloat = stof(floattostring);
	cout << stringintofloat;


	//double to string
	double decimalnumber = 4.555555555555555;
	string doubletostring = to_string(decimalnumber);
	cout << doubletostring << endl;


	//string to double
double stringintodouble = stof(doubletostring);
	cout << stringintodouble;


 //QUestio
	//Can we convert string in char
	//Char into string
	

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
