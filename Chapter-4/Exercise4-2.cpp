 // File: Exercise4-2.cpp
 // Description: Exercise 4.2 # 4
 // By: J. Gavin Ray
 // Date: 1/31/12
 #include <iostream>
 
using namespace std;
 
int main()
 {
     const double LowInterest = 7;
     const double HighInterest = 8.5;
     double nyrs;
     double principal;
     
    cout << "Interest Calculator By J. Gavin Ray (Exercises 4.2 #4)\n";
     cout << "Please enter an amount to be deposited: ";
     cin  >> principal;
     cout << "Please enter the number of years " << principal << " is to be deposited: ";
     cin  >> nyrs;
     
    if (nyrs > 2)
     {
         cout << "Your principal will incure interest at the rate of: " << HighInterest << "%";
     }
     else
     {
         cout << "Your principal will insure interest at the rate of: " << LowInterest <<"%";
     }
 
    return 0;
 }
 