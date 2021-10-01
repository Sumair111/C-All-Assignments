
#include <iostream>
using namespace std;

int main()
{







    //Write a C program to print all alphabets from a to z.
          //--HINT : Loop will start like this char start = 1
      //char 65 to 90

      //Write a C program to print all alphabets from a to z. using for loop
    char FirstAlphabet = 65;
    for (char FirstAlphabet = 65; FirstAlphabet <= 90; FirstAlphabet++)
    {
        cout << FirstAlphabet << endl;
    }
    //Write a C program to print all alphabets from a to z. using while loop
    char Firstalphabet = 65;
    while (Firstalphabet <= 90) {
        cout << Firstalphabet << endl;
        Firstalphabet++;
    }
    //Write a C program to print all alphabets from a to z. using do-while loop
    char firstalphabet = 65;
    do {
        cout << firstalphabet << endl;
        firstalphabet++;

    } while (firstalphabet <= 90);
}
