
#include <iostream>
using namespace std;

int main()
{
	int marks = 0;
	cout << "Enter your Marks ";
	cin >> marks;
	/*
	If Marks are less than 33 then print Failed
	If Marks are greater than 33 and less than 50 then Print Passed with D Grade
	If Marks are greater than 50 and less than 70 then Print Passed with B Grade
	If Marks are greater than 33 and less than 80 then Print Passed with A Grade
	*/

	if (marks < 33 || marks == 0 )
	{
		cout << "Dummy";
	}
	else if (marks > 33 && marks < 50)
	{
		cout << "Dummy";

	}
	else if (marks > 50 && marks < 70)
	{
		cout << "Dummy";

	}
	else
	{
		cout << "Dummy";

	}
	

}


