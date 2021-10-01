// CGPA Calculater 29 september.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    /* Step 1

    Initialize variable names for marks of subjects
    */

    float MarksofEnglish;

    /* Step 2

   Initialize variable names for credit hours of subjects
   */

    int credithoursofEnglish;
    /* Step 3

   Initialize and assign values to subject names
   Only One subject
 */
    string subjectname = "English";

    /* Step 4

  Take input of marks from user and store them in relevant variable and display subject names as well
  if input is invalid then dont store it and ask user to enter again
   */
    cout << "Enter Marks of " << subjectname << endl;
    cin >> MarksofEnglish;

    if (MarksofEnglish < 0 || MarksofEnglish>100) {

        cout << "Invalid Marks Please Enter again" << endl;
    }

    cin >> MarksofEnglish;
    if (MarksofEnglish >= 0 || MarksofEnglish <= 100) {
        cout << "Marks =" << MarksofEnglish << endl;
    }








    /* Step 5

   Take input of credit hours from user and store them in relevant variable and display subject names as well
   if input is invalid then dont store it and ask user to enter again*/

    cout << "Enter credit of " << subjectname << endl;
    cin >> credithoursofEnglish;

    if (credithoursofEnglish < 0 || credithoursofEnglish>5) {

        cout << "Invalid Credit hours Please Enter again" << endl;
        cin >> credithoursofEnglish;

    }

       

    /* Step 6
     initialize variable names to store cgpa of subject that we are going to find in step 7
     */
    double gpaofenglish;

    /* Step 7
    if marks are valid then calculate gpa of subject by applying if else conditions and then store it to relevant variable declared in step 6
   */
    if (MarksofEnglish >= 0 || MarksofEnglish <= 50) {
        gpaofenglish = 0;
    }
    if (MarksofEnglish >= 50 || MarksofEnglish <= 54) {
        gpaofenglish = 1;
    }

    if (MarksofEnglish >= 55 || MarksofEnglish <= 60) {
        gpaofenglish = 1.7;
    }
    if (MarksofEnglish >= 51 || MarksofEnglish <= 64) {
        gpaofenglish = 2;
    }
    if (MarksofEnglish >= 65 || MarksofEnglish <= 69) {
        gpaofenglish = 2.3;
    }
    if (MarksofEnglish >= 70 || MarksofEnglish <= 72) {
        gpaofenglish = 2.7;
    }
    if (MarksofEnglish >= 73 || MarksofEnglish <= 76) {
        gpaofenglish = 3;

    } if (MarksofEnglish >= 77 || MarksofEnglish <= 79) {
        gpaofenglish = 3.3;

    } if (MarksofEnglish >= 80 || MarksofEnglish <= 84) {
        gpaofenglish = 3.7;

    } if (MarksofEnglish >= 85 || MarksofEnglish <= 89) {
        gpaofenglish = 4;

    } if (MarksofEnglish >= 90 || MarksofEnglish <= 100) {
        gpaofenglish = 4.3;
    }

    cout << "THe gpa of" << subjectname << "is" << gpaofenglish << endl;

    float MarksofMaths;
    string subjectname = "Maths";
    int credithoursofmath;
    cout << "Enter The Marks Of " << subjectname << endl;
    cin >> MarksofMaths;
    if (MarksofMaths < 0 || MarksofMaths >100) {
        cout << " Invalid Marks" << endl;
        cin >> MarksofMaths;
        if (MarksofMaths >= 0 || MarksofMaths <= 100) {
            
        }
        cout << "Enter The Credit Hours Of " << subjectname << endl;
        cin >> credithoursofmath;
        if (credithoursofmath < 0 || credithoursofmath >6) {
            cout << " Invalid Marks" << endl;
            cin >> credithoursofmath;
            if (credithoursofmath >= 0 ||credithoursofmath <= 6) {

            }



    }





}
 /* Step 8
 Apply formula of cgpa 
CGPA : gpaOfEnglish * credithour of english + gpaofMath * crdeit hout / ()



 */




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

