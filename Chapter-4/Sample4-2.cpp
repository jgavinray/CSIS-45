// File: Sample4-2.cpp
 // Description: Sample Program # 4.3
 // By: J. Gavin Ray
 // Date: 1/31/12
 
#include <iostream>
 #include <iomanip>
 
using namespace std;
 
int main()
 {
     const float LOWRATE = 0.02;    // Lower tax rate
     const float HIGHRATE = 0.025;  // Higher tax rate
     const float CUTOFF = 20000.0;  // Cut off for low rate
     const float FIXEDAMT = 400;    // Fixed dollar amount for higher rate amounts
     
    double taxable, taxes;
     
    cout << "Please type in the taxable income: ";
     cin  >> taxable;
     
    if (taxable <= CUTOFF)
         taxes = LOWRATE * taxable;
     if (taxable >= 80000)          // Added this if statement - J. Gavin Ray
     {
         cout  << "Would love to help you, but you need to see a tax professional!";
     return 0;
     }
     else
         taxes = HIGHRATE * (taxable - CUTOFF) + FIXEDAMT;
     
    // set output format
     cout << setiosflags(ios::fixed);
     cout << setiosflags(ios::showpoint);
     cout << setprecision(2);
     
    cout << "Taxes are $ " << taxes << endl;
     
    return 0;
     
}
 