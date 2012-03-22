// File: Sample4.cpp
 // Description: Sample Program # 4.7
 // By: J. Gavin Ray
 // Date: 1/31/12
 
#include <iostream>
 #include <math.h>
 
using namespace std;
 
int main()
 {
     int opselect;
     double fnum, snum;
     
    cout << "Please type in two numbers: ";
     cin  >> fnum >> snum;
     cout << "Enter a select code: ";
     cout << "\n\n        1 for addition";
     cout << "\n        2 for multiplication";
     cout << "\n        3 for division";
     cout << "\n        4 to square the first numer";  // New
     cout << "\n        5 to square the second number"; // New
     cout << "\n        6 to raise the first number to the second number power"; // New
     cout << "\n\nPlease enter your choice: "; // New
     cin >> opselect;
     
    switch (opselect)
     {
         case 1:
             cout << "The sum of the numbers entered is " << fnum + snum;
             break;
         case 2:
             cout << "The product of the numbers entered is " << fnum * snum;
             break;
         case 3:
             cout << "The first number divided by the second number is " << fnum / snum;
             break;
 // From here on is the new cases
         case 4:
             cout << fnum << " squared is " << fnum * fnum;
             break;
         case 5:
             cout << snum << " squared is " << snum * snum;
             break;
         case 6:
             cout << fnum << " to the " << snum << " power is " << pow (fnum, snum);
             break;
         default:
             cout << "You have entered an invalid selection, please run program again and select from the list.";
             break;
         
    } // End of switch
     
    cout << endl;
     
    return 0;
 }
 