// Conditions in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	/*if (x > y) {
		cout << "Hellow World" << endl;}
	else if (x == y) {
		cout << "Assalam O Alaikum World" << endl;
	}
	else{
	cout << " World Hellow";
	}*/

	//Questions
	//Take values of length and breadth of a rectangle from user and check if it is square or not.
	int length;
	int breadth;
	cout << " Enter the length  " << endl;
	cin >> length;
	cout << "Enter Breadth  " << endl;
	cin >> breadth;
	if (length == breadth) {
		cout << "Its a square" << endl;
	}
	else if (length != breadth) {
		cout << "Its a Rectangle" << endl;
	}
	else {
		cout << "Not a square nor a rectangle" << endl;
	}

	//Take two int values from user and print greatest among them.
	int value1;
	int value2;
	cout << "Enter the values" << endl;
	cin >> value1 >> value2;
	if (value1 > value2) {
		cout << "Value1 is greater.. : " << value1 << endl;
	}
	else if (value1 < value2) {
		cout << "Value2 is greater.. :" << value2 << endl;
	}
	else {
		cout << "Both Are Equal" << endl;
		cout << "value 1 = value 2" << endl;
	}

	//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
	//Ask user for quantity
		//Suppose, one unit quantity will cost 100.
		//Judge and print total cost for user.


	int price;
	int quantity;
	cout << "How much quantity?" << endl;
	cin >> quantity;
	price = quantity * 100;
	if (price > 1000) {
		cout << " The price is " <<price-price*.1 << endl << endl;
	}
	else {
		cout << "Price is " << price << endl;
	}
		//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
	//Ask user for their salary and year of service and print the net bonus amount.
	int yearsofservice;
	int salary;
	cout << "Enter the years of service" << endl;
	cin >> yearsofservice;
	cout << "Enter your salary" << endl;
	cin >> salary;
	int bonus = salary * 1.05;

	if (yearsofservice > 5) {

		cout << "Your salary with bonus is : " << bonus << endl;
	}
	else {

		cout << "Your salary is :" << salary << endl;

	}

	//A school has following rules for grading system:
	/*a.Below 25 - F
		b. 25 to 45 - E
		c. 45 to 50 - D
		d. 50 to 60 - C
		e. 60 to 80 - B
		f.Above 80 - A
		Ask user to enter marks and print the corresponding grade.*/

	int marks;
	char f = 'F';
	char e = 'E';
	char d = 'D';
	char c = 'C';
	char b = 'B';
	char a = 'A';
	cout << "Enter marks" << endl;
	cin >> marks;
	if (marks < 25) {
		cout << "Your grade is " << f << endl;
	}
	if (marks >= 25 && marks < 45) {
		cout << " Your grade is " << e << endl;
	}
	else if (marks >=45  && marks <50) {
		cout << " Your grade is " << d << endl;
	}
	else if (marks >= 50 && marks < 60) {
		cout << " Your grade is " << c << endl;
	}
	
	else if (marks >= 60 && marks < 80) {
		cout << " Your grade is " << b << endl;
	}
	else if (marks >80) {
		cout << " Your grade is " << a << endl;
	}
	else {
		cout << "invalid Marks" << endl;
	}
	//Write a program to check if a year is leap year or not.
		//If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.
	int year;
	cout << "enter year" << endl;
	cin >> year;
	if (year % 4 == 0) {
		cout << "It is leap year" << endl;
	}
	else if (year % 400 == 0) {
		cout << "It is leap year" << endl;
	}
	else {
		cout << "Its not leap year" << endl;
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
