// Take marks from user as a input of 1st two semesters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//Here is The GPa Calculater
	float Markssemester1subject1;
	float Markssemester1subject2;
	float Markssemester1subject3;
	float Markssemester1subject4;
	float Markssemester1subject5;

	char credithoursemester1subject1;
	char credithoursemester1subject2;
	char credithoursemester1subject3;
	char credithoursemester1subject4;
	char credithoursemester1subject5;
	
	cout << ".........SEMESTER 1.........." << endl;
	cout << "   ............................" << endl;
	cout << "Enter The marks  of Applied physics " << endl;
	cin >> Markssemester1subject1;
	if (Markssemester1subject1 < 0 || Markssemester1subject1 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester1subject1;
	if (Markssemester1subject1 >= 0 || Markssemester1subject1 <= 49) {
		cout << "Your Subject GPA is 0 And Your Grade is F " << endl;
	}
 else if (Markssemester1subject1 >= 50 || Markssemester1subject1 <= 54) {
		cout << "Your Subject GPA is 1 And Your Grade is D " << endl;
	}
 else if (Markssemester1subject1 >= 55 || Markssemester1subject1 <= 59) {
		cout << "Your Subject GPA is 1.7 And Your Grade is C-" << endl;
	}
   else if (Markssemester1subject1 >= 60 || Markssemester1subject1 <= 64) {
		cout << "Your Subject GPA is 2  And Your Grade is C " << endl;
	}
   else if		cout << "Your Subject  GPA is 2.3 And Your Grade is C+ " << endl;
	}
	else if (Markssemester1subject1 >= 70 || Markssemester1subject1 <= 72) {
		cout << "Your Subject GPA is 2.7 And Your Grade is B- " << endl;

	}
	 if (Markssemester1subject1 >= 73 || Markssemester1subject1 <= 76) {
		cout << "Your Subject GPA is 3  And Your Grade is B" << endl;
	}
	 else if (Markssemester1subject1 >= 77 || Markssemester1subject1 <= 79) {
		cout << "Your Subject GPA is 3.3 And Your Grade is B+ " << endl;
	}
	 else if (Markssemester1subject1 >= 80 || Markssemester1subject1 <= 84) {
		cout << "Your Subject GPA is 3.7 And Your Grade is A- " << endl;
	}
	 else if (Markssemester1subject1 >= 85 || Markssemester1subject1 <= 100) {
		cout << "Your Subject GPA is 4 And Your Grade is A " << endl;
	}

	else {
		cout << "invalid Marks" << endl;
	}

	cout << "Enter The marks of Calculus And Analytical geometry " << endl;
	cin >> Markssemester1subject2;
	if (Markssemester1subject2 < 0 || Markssemester1subject2 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester1subject2;
	if (Markssemester1subject1 >= 0 || Markssemester1subject1 <= 49) {
		cout << "Your Subject GPA is 0 And Your Grade is F" << endl;
	}
	else if (Markssemester1subject2 >= 50 ||Markssemester1subject2 <= 54) {
		cout << "Your Subject GPA is 1 And Your Grade is D" << endl;
	}
	else if (Markssemester1subject2 >= 55 || Markssemester1subject2 <= 59) {
		cout << "Your  Subject GPA is 1.7 And Your Grade is C- " << endl;
	}
	else if (Markssemester1subject2 >= 60 || Markssemester1subject2 <= 64) {
		cout << "Your Subject GPA is 2 And Your Grade is C" << endl;
	}
	else if (Markssemester1subject2 >= 65 || Markssemester1subject2 <= 69) {
		cout << "Your Subject GPA is 2.3 And Your Grade C+" << endl;
	}
	else if (Markssemester1subject2 >= 70 || Markssemester1subject2 <= 72) {
		cout << "Your Subject GPA is 2.7 And Your Grade is B-" << endl;

	}
	else if (Markssemester1subject2 >= 73 || Markssemester1subject2 <= 76) {
		cout << "Your Subject GPA is 3 And Your Grade B " << endl;
	}
	else if (Markssemester1subject2 >= 77 || Markssemester1subject2 <= 79) {
		cout << "Your Subject GPA is 3.3 And Your Grade B+ " << endl;
	}
	else if (Markssemester1subject2 >= 80 || Markssemester1subject2 <= 84) {
		cout << "Your Subject GPA is 3.7 And Your Grade A-" << endl;
	}
	else if (Markssemester1subject2 >= 85 || Markssemester1subject2 <= 100) {
		cout << "Your Subject GPA is 4 And Your Grade A" << endl;
	}

	else {
		cout << "invalid Marks" << endl;
	}
	cout << "Enter The marks of English Composition And Comprehension " << endl;
	cin >> Markssemester1subject3;
	if (Markssemester1subject3 < 0 || Markssemester1subject3 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester1subject3;
	if (Markssemester1subject3 >= 0 || Markssemester1subject3 <= 49) {
		cout << "Your Subject GPA is 0 And Your Grade is F" << endl;
	}
	else if (Markssemester1subject3 >= 50 || Markssemester1subject3 <= 54) {
		cout << "Your Subject GPA is 1 And Your Grade D" << endl;
	}
	else if (Markssemester1subject3 >= 55 || Markssemester1subject3 <= 59) {
		cout << "Your Subject GPA is 1.7 And Your Grade C-" << endl;
	}
	else if (Markssemester1subject3 >= 60 || Markssemester1subject3 <= 64) {
		cout << "Your Subject GPA is 2  And Your Grade C" << endl;
	}
	else if (Markssemester1subject3 >= 65 || Markssemester1subject3 <= 69) {
		cout << "Your Subject GPA is 2.3 And Your Grade C+ " << endl;
	}
	else if (Markssemester1subject3 >= 70 || Markssemester1subject3 <= 72) {
		cout << "Your Subject GPA is 2.7 And Your Grade B-" << endl;

	}
	else if (Markssemester1subject3 >= 73 || Markssemester1subject3 <= 76) {
		cout << "Your Subject GPA is 3 And Your Grade is B" << endl;
	}
	else if (Markssemester1subject3 >= 77 || Markssemester1subject3 <= 79) {
		cout << "Your Subject GPA is 3.3 And Your Grade is B+" << endl;
	}
	else if (Markssemester1subject3 >= 80 ||Markssemester1subject3 <= 84) {
		cout << "Your Subject GPA is 3.7 And Your Grade is A- " << endl;
	}
	else if (Markssemester1subject3 >= 85 || Markssemester1subject3 <= 100) {
		cout << "Your Subject GPA is 4 And Your Grade is A" << endl;
	}

	else {
		cout << "invalid Marks" << endl;
	}

	cout << "Enter The marks  of Fundamentals of ICT " << endl;
	cin >> Markssemester1subject4;
	if (Markssemester1subject4 < 0 || Markssemester1subject4 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester1subject4;
	if (Markssemester1subject4 >= 0 || Markssemester1subject4 <= 49) {
		cout << "Your Subject GPA is 0 And Your Grade is F " << endl;

	}

	
	else if (Markssemester1subject4 >= 50 || Markssemester1subject4 <= 54) {
		cout << "Your Subject GPA is 1 And Your Grade is D " << endl;
	}
	else if (Markssemester1subject4 >= 55 || Markssemester1subject4 <= 59) {
		cout << "Your  Subject GPA is 1.7 And Your Grade is C-" << endl;
	}
	else if (Markssemester1subject4 >= 60 || Markssemester1subject4 <= 64) {
		cout << "Your Subject GPA is 2  And Your Grade is C " << endl;
	}
	else if (Markssemester1subject4 >= 65 || Markssemester1subject4 <= 69) {
		cout << "Your Subject GPA is 2.3 And Your Grade is C+ " << endl;
	}
	else if (Markssemester1subject4 >= 70 || Markssemester1subject4 <= 72) {
		cout << "Your Subject GPA is 2.7 And Your Grade is B- " << endl;

	}
	else if (Markssemester1subject4 >= 73 || Markssemester1subject4 <= 76) {
		cout << "Your Subject GPA is 3  And Your Grade is B" << endl;
	}
	else if (Markssemester1subject4 >= 77 || Markssemester1subject4 <= 79) {
		cout << "Your Subject GPA is 3.3 And Your Grade is B+ " << endl;
	}
	else if (Markssemester1subject4 >= 80 || Markssemester1subject4 <= 84) {
		cout << "Your Subjec GPA is 3.7 And Your Grade is A- " << endl;
	}
	else if (Markssemester1subject4 >= 85 || Markssemester1subject4 <= 100) {
		cout << "Your Subject GPA is 4 And Your Grade is A " << endl;
	}

	else {
		cout << "invalid Marks" << endl;
	}
	cout << "Enter The marks of Programming Fundamentals " << endl;
	cin >> Markssemester1subject5;

	if (Markssemester1subject5 < 0 || Markssemester1subject5 >100) {
		cout << "Invalid Marks" << endl;
	}
	
	cin >> Markssemester1subject5;
	if (Markssemester1subject1 >= 0 || Markssemester1subject5 <= 49) {
		cout << "Your Subject GPA is 0 And Your Grade is F " << endl;
	}
	else if (Markssemester1subject5 >= 50 || Markssemester1subject5 <= 54) {
		cout << "Your Subject GPA is 1 And Your Grade is D " << endl;
	}
	else if (Markssemester1subject5 >= 55 || Markssemester1subject5 <= 59) {
		cout << "Your Subject GPA is 1.7 And Your Grade is C-" << endl;
	}
	else if (Markssemester1subject5 >= 60 || Markssemester1subject5 <= 64) {
		cout << "Your Subject GPA is 2  And Your Grade is C " << endl;
	}
	else if (Markssemester1subject5 >= 65 || Markssemester1subject5 <= 69) {
		cout << "Your Subject GPA is 2.3 And Your Grade is C+ " << endl;
	}
	else if (Markssemester1subject5 >= 70 || Markssemester1subject5 <= 72) {
		cout << "Your Subject GPA is 2.7 And Your Grade is B- " << endl;

	}
	else if (Markssemester1subject5 >= 73 || Markssemester1subject5 <= 76) {
		cout << "Your Subject  GPA is 3  And Your Grade is B" << endl;
	}
	else if (Markssemester1subject5 >= 77 || Markssemester1subject5 <= 79) {
		cout << "Your Subject GPA is 3.3 And Your Grade is B+ " << endl;
	}
	else if (Markssemester1subject5 >= 80 || Markssemester1subject5 <= 84) {
		cout << "Your Subject GPA is 3.7 And Your Grade is A- " << endl;
	}
	else if (Markssemester1subject5 >= 85 || Markssemester1subject5 <= 100) {
		cout << "Your GPA is 4 And Your Grade is A " << endl;
	}

	else {
		cout << "invalid Marks" << endl;
	}

	cout << "Enter the The Calculated GPa of APPLIED PHYSICS : " << endl;
	cin >> Markssemester1subject1;
	cout << "The GPA of Applied physics is " << Markssemester1subject1 << endl;
	cout << "Enter Credit hours of Applied Physics" << endl;
	cin >> credithoursemester1subject1;
	cout << "The Credit hours of Applied Physics are : " << credithoursemester1subject1 << endl;

	cout << " Enter The CALCULATED GPA of CALCULUS AND ANALYTICAL GEOMETRY IS : " << endl;
	cin >> Markssemester1subject2;
	cout << "The GPA of Calculus and Analytical Geometry is " << Markssemester1subject2 << endl;
	cout << "Enter the Credit Hours of Calculus and Analytical Geometry" << endl;
	cin >> credithoursemester1subject2;
	cout << "The Credit hours of Calculus And Analytical Geometry is : " << credithoursemester1subject2 << endl;

	cout << "Enter The CALCULATED  GPA of ENGLISH COMPOSITION AND COMPREHENSION Is : " << endl;
	cin >> Markssemester1subject3;
	cout << "The GPA of English and Comprehension is " << Markssemester1subject3 << endl;
	cout << "Enter The Credit hours of English COmpostion And Comprehesnion" << endl;
	cin >> credithoursemester1subject3;
	cout << "The Credit hours of English Composition And Comprehesnion : " << credithoursemester1subject3 << endl;

	cout << "Enter the The Calculated GPa of Fundamentals of ICT : " << endl;
	cin >> Markssemester1subject4;
	cout << "The GPA of Fundamentals of ICT is " << Markssemester1subject4 << endl;
	cout << "Enter Credit hours of Fundamentals of ICT" << endl;
	cin >> credithoursemester1subject4;
	cout << "The Credit hours of Fundamentals of ICT are : " << credithoursemester1subject4 << endl;

	cout << "Enter the The Calculated GPa of Programming Fundamentals : " << endl;
	cin >> Markssemester1subject5;
	cout << "The GPA of Programming Fundamentals is " << Markssemester1subject5 << endl;
	cout << "Enter Credit hours of Programming Fundamentals" << endl;
	cin >> credithoursemester1subject5;
	cout << "The Credit hours of Programming Fundamentals : " << credithoursemester1subject5 << endl;

	cout << "..........Now.........." << endl;
	cout << "....Lets Calculate whole Semester SGPA...." << endl;
	float SSGPA;
	SSGPA = (Markssemester1subject1 * credithoursemester1subject1) + (Markssemester1subject2 * credithoursemester1subject2) + (Markssemester1subject3 * credithoursemester1subject3) + (Markssemester1subject4 * credithoursemester1subject4) + (Markssemester1subject5 * credithoursemester1subject5);
	int TotalCredithours = credithoursemester1subject1 + credithoursemester1subject2 + credithoursemester1subject3 + credithoursemester1subject4 + credithoursemester1subject5;
	float SGPA = SSGPA / TotalCredithours;
	cout << "So THe SGPA of Semester 1 is : " << SGPA;
	cout << "............................................" << endl;
	cout << "............................................" << endl;
	cout << "............................................" << endl;
	cout << "............................................" << endl;
	cout << ".................SEMESTER 2................" << endl;
	cout << "............................................" << endl;

	float Markssemester2subject1;
	float Markssemester2subject2;
	float Markssemester2subject3;
	float Markssemester2subject4;
	float Markssemester2subject5;
	float Markssemester2subject6;

	char credithourssemester2subject1;
	char credithourssemester2subject2;
	char credithourssemester2subject3;
	char credithourssemester2subject4;
	char credithourssemester2subject5;
	char credithourssemester2subject6;

	cout << "Enter The Marks Of Communication Skills" << endl;
	cin >> Markssemester2subject1;
	if (Markssemester2subject1 < 0 || Markssemester2subject1 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester2subject1;
	if (Markssemester2subject1 >= 0 || Markssemester2subject1 <= 49) {
		cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;
	}
	else if (Markssemester2subject1 >= 50 || Markssemester2subject1 <= 54) {
		cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
	}else if (Markssemester2subject1 >= 54 || Markssemester2subject1 <= 59) {
		cout << "YOur Subject GPA is 1.7 And your Grade is C- " << endl;
	}else if (Markssemester2subject1 >= 60 || Markssemester2subject1 <= 64) {
		cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
	}else if (Markssemester2subject1 >= 65 || Markssemester2subject1 <= 69){
		cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
	}else if (Markssemester2subject1 >= 70 || Markssemester2subject1 <= 74){
		cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
	}else if (Markssemester2subject1 >= 75 || Markssemester2subject1 <= 79){
		cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
	}else if (Markssemester2subject1 >= 80 || Markssemester2subject1 <= 84){
		cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
	}else if (Markssemester2subject1 >= 85 || Markssemester2subject1 <= 89){
		cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
	}
	else if (Markssemester2subject1 >= 90 || Markssemester2subject1 <= 100) {
		cout << "YOur Subject GPA is 4 And your Grade is A " << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	cout << "Enter The Marks Of Data Logic And Design" << endl;
	cin >> Markssemester2subject2;
	if (Markssemester2subject2 < 0 || Markssemester1subject2 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester2subject2;
	if (Markssemester2subject2 >= 0 || Markssemester2subject2 <= 49) {
		cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;
	}
	else if (Markssemester2subject2 >= 50 || Markssemester2subject2 <= 54) {
		cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
	}else if (Markssemester2subject2 >= 54 || Markssemester2subject2 <= 59) {
		cout << "YOur Subject GPA is 1.7 And your Grade is C- " << endl;
	}else if (Markssemester2subject2 >= 60 || Markssemester2subject2 <= 64) {
		cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
	}else if (Markssemester2subject2 >= 65 || Markssemester2subject2 <= 69){
		cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
	}else if (Markssemester2subject2 >= 70 || Markssemester2subject2 <= 74){
		cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
	}else if (Markssemester2subject2 >= 75 || Markssemester2subject2 <= 79){
		cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
	}else if (Markssemester2subject2 >= 80 || Markssemester2subject2 <= 84){
		cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
	}else if (Markssemester2subject2 >= 85 || Markssemester2subject2 <= 89){
		cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
	}
	else if (Markssemester2subject2 >= 90 || Markssemester2subject2 <= 100) {
		cout << "YOur Subject GPA is 4 And your Grade is A " << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	cout << "Enter The Marks of Data Login and Design Lab" << endl;
	cin >> Markssemester2subject3;
	if (Markssemester2subject3 < 0 || Markssemester1subject3 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester2subject3;
	if (Markssemester2subject3 >= 0 || Markssemester2subject3 <= 49) {
		cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;}
	else if (Markssemester2subject3 >= 50 || Markssemester2subject3 <= 54) {
		cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
	}else if (Markssemester2subject3 >= 54 || Markssemester2subject3 <= 59) {
		cout << "YOur Subject GPA is 1.7 And Your Grade is C- " << endl;
	}else if (Markssemester2subject3 >= 60 || Markssemester2subject3 <= 64) {
		cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
	}else if (Markssemester2subject3 >= 65 || Markssemester2subject3 <= 69){
		cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
	}else if (Markssemester2subject3 >= 70 || Markssemester2subject3 <= 74){
		cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
	}else if (Markssemester2subject3 >= 75 || Markssemester2subject3 <= 79){
		cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
	}else if (Markssemester2subject3 >= 80 || Markssemester2subject3 <= 84){
		cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
	}else if (Markssemester2subject3 >= 85 || Markssemester2subject3 <= 89){
		cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
	}
	else if (Markssemester2subject3 >= 90 || Markssemester2subject3 <= 100) {
		cout << "YOur Subject GPA is 4 And your Grade is A " << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	cout << "Enter The Marks  Of MultiVariable Calculus" << endl;
	cin >> Markssemester2subject4;
	if (Markssemester2subject4 < 0 || Markssemester2subject4 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester2subject4;
	if (Markssemester2subject4 >= 0 || Markssemester2subject4 <= 49) {
		cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;
	}
	else if (Markssemester2subject4 >= 50 || Markssemester2subject4 <= 54) {
		cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
	}else if (Markssemester2subject4 >= 54 || Markssemester2subject4 <= 59) {
		cout << "YOur Subject GPA is 1.7 And your Grade is C- " << endl;
	}else if (Markssemester2subject4 >= 60 || Markssemester2subject4 <= 64) {
		cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
	}else if (Markssemester2subject4 >= 65 || Markssemester2subject4 <= 69){
		cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
	}else if (Markssemester2subject4 >= 70 || Markssemester2subject4 <= 74){
		cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
	}else if (Markssemester2subject4 >= 75 || Markssemester2subject4 <= 79){
		cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
	}else if (Markssemester2subject4 >= 80 || Markssemester2subject4 <= 84){
		cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
	}else if (Markssemester2subject4 >= 85 || Markssemester2subject4 <= 89){
		cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
	}
	else if (Markssemester2subject4 >= 90 || Markssemester2subject4 <= 100) {
		cout << "YOur Subject GPA is 4 And your Grade is A " << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	cout << "Enter The Marks Of Object Oreiented Programming" << endl;
	cin >> Markssemester2subject5;

	if (Markssemester2subject5 < 0 || Markssemester2subject5 >100) {
		cout << "Invalid Marks" << endl;
	}
	cin >> Markssemester2subject5;
	if (Markssemester2subject5 >= 0 || Markssemester2subject5 <= 49) {
		cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;
	}
	else if (Markssemester2subject5 >= 50 || Markssemester2subject5 <= 54) {
		cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
	}else if (Markssemester2subject5 >= 54 || Markssemester2subject5 <= 59) {
		cout << "YOur Subject GPA is 1.7 And your Grade is C- " << endl;
	}else if (Markssemester2subject5 >= 60 || Markssemester2subject5 <= 64) {
		cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
	}else if (Markssemester2subject5 >= 65 || Markssemester2subject5 <= 69){
		cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
	}else if (Markssemester2subject5 >= 70 || Markssemester2subject5 <= 74){
		cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
	}else if (Markssemester2subject5 >= 75 || Markssemester2subject5 <= 79){
		cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
	}else if (Markssemester2subject5 >= 80 || Markssemester2subject5 <= 84){
		cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
	}else if (Markssemester2subject5 >= 85 || Markssemester2subject5 <= 89){
		cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
	}
	else if (Markssemester2subject5 >= 90 || Markssemester2subject5 <= 100) {
		cout << "YOur Subject GPA is 4 And your Grade is A " << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	cout << "Enter The Marks Of Object Oriented Programming Lab " << endl;
	cin >> Markssemester2subject6;

	if (Markssemester2subject6 < 0 || Markssemester2subject6 >100) {
		cout << "Invalid Marks" << endl;
	}
		cin >> Markssemester2subject6;
		if (Markssemester2subject6 >= 0 || Markssemester2subject6 <= 49) {
			cout << "Your Subject GPA IS 0 And your Garde Is F" << endl;
		}
		else if (Markssemester2subject6 >= 50 || Markssemester2subject6 <= 54) {
			cout << "YOur Subject GPA is 1 And your Grade is D " << endl;
		}
		else if (Markssemester2subject6 >= 54 || Markssemester2subject6 <= 59) {
			cout << "YOur Subject GPA is 1.7 And your Grade is C- " << endl;
		}
		else if (Markssemester2subject6 >= 60 || Markssemester2subject6 <= 64) {
			cout << "YOur Subject GPA is 2 And your Grade is C " << endl;
		}
		else if (Markssemester2subject6 >= 65 || Markssemester2subject6 <= 69) {
			cout << "YOur Subject GPA is 2.3 And your Grade is C+ " << endl;
		}
		else if (Markssemester2subject6 >= 70 || Markssemester2subject6 <= 74) {
			cout << "YOur Subject GPA is 2.7 And your Grade is B- " << endl;
		}
		else if (Markssemester2subject6 >= 75 || Markssemester2subject6 <= 79) {
			cout << "YOur Subject GPA is 3 And your Grade is B" << endl;
		}
		else if (Markssemester2subject6 >= 80 || Markssemester2subject6 <= 84) {
			cout << "YOur Subject GPA is 3.3 And your Grade is B+ " << endl;
		}
		else if (Markssemester2subject6 >= 85 || Markssemester2subject6 <= 89) {
			cout << "YOur Subject GPA is 3.7 And your Grade is A- " << endl;
		}
		else if (Markssemester2subject6 >= 90 || Markssemester2subject6 <= 100) {
			cout << "YOur Subject GPA is 4 And your Grade is A " << endl;

		}
		else {
			cout << "Invalid Input" << endl;
		}
		cout << "Enter The Calculated GPA of Communication Skills" << endl;
		cin >> Markssemester2subject1;
		cout << "The GPA of Communication Skills is" << Markssemester2subject1 << endl;
		cout << "Enter The Credit hours of Communication Skills" << endl;
		cin >> credithourssemester2subject1;
		cout << "The Credit Hours now are " << credithourssemester2subject1 << endl;

		cout << "Enter The Calculated GPA of Data Logic And Design" << endl;
		cin >> Markssemester2subject2;
		cout << "The GPA of Data Logic And Design is" << Markssemester2subject2 << endl;
		cout << "Enter The Credit hours of Data Login And Design" << endl;
		cin >> credithourssemester2subject2;
		cout << "The Credit Hours now are " << credithourssemester2subject2 << endl;

		cout << "Enter The Calculated GPA of Data Login And Design Lab" << endl;
		cin >> Markssemester2subject3;
		cout << "The GPA of DLD Lab is" << Markssemester2subject3 << endl;
		cout << "Enter The Credit hours of DLD LAB" << endl;
		cin >> credithourssemester2subject3;
		cout << "The Credit Hours now are " << credithourssemester2subject3 << endl;

		cout << "Enter The Calculated GPA of MultiVariable Calculus" << endl;
		cin >> Markssemester2subject4;
		cout << "The GPA of MultiVariable Calculus is" << Markssemester2subject4 << endl;
		cout << "Enter The Credit hours of MultiVariable Calculus" << endl;
		cin >> credithourssemester2subject4;
		cout << "The Credit Hours now are " << credithourssemester2subject4 << endl;

		cout << "Enter The Calculated GPA of Object Oriented Programming" << endl;
		cin >> Markssemester2subject5;
		cout << "The GPA of Object Oriented Programmings is" << Markssemester2subject5 << endl;
		cout << "Enter The Credit hours of Object Oriented Programming" << endl;
		cin >> credithourssemester2subject5;
		cout << "The Credit Hours now are " << credithourssemester2subject5 << endl;

		cout << "Enter The Calculated GPA of Object Oriented Programming Lab" << endl;
		cin >> Markssemester2subject6;
		cout << "The GPA of Object Oreinted Programming is" << Markssemester2subject6 << endl;
		cout << "Enter The Credit hours of Communication Skills" << endl;
		cin >> credithourssemester2subject6;
		cout << "The Credit Hours now are " << credithourssemester2subject6 << endl;
		cout << "LEts Calculate SGPA No" << endl;
		float SSGPA2 = (Markssemester2subject1 * credithourssemester2subject1) + (Markssemester2subject2 * credithourssemester2subject2) + (Markssemester2subject3 * credithourssemester2subject3) + (Markssemester2subject4 * credithourssemester2subject4) + (Markssemester2subject5 * credithourssemester2subject5) + (Markssemester2subject6 * credithourssemester2subject6);
		int TotalCreditHours2 = credithourssemester2subject1 + credithourssemester2subject2 + credithourssemester2subject3 + credithourssemester2subject4 + credithourssemester2subject5 + credithourssemester2subject6;
		float SGPA2 = SSGPA2 / TotalCreditHours2;
		cout << "Here is The SGPA Of Second Semester : " << SGPA2 << endl;


	}
     