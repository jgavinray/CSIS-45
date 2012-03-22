// File: Exercise3-3.cpp
 // Description: Exercise 3.3 #4
 // By: J. Gavin Ray
 // Date: 1/24/2012
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
int main()
 {
     double a = 1728.8964;
     double b;
     
    b = a;
     a = sqrt(a);
     a = sqrt(a);
     cout.precision(9);  // Hopefully this fixes the formatting issue.
     cout << "\nDisplaying the fourth root of " << b << ": " << a << "\n\n";
     
    return 0;
 }
 