// File: Exercise6-2.cpp
 // Description: Exercise 6.2 #6
 // By: J. Gavin Ray
 // Date: 2/8/12
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
double hypotenuse(double a, double b)
 {
     return (a * a) + (b * b);
 }
 
int main()
 {
     double a;
     double b;
     
    cout << "\nPythagorean Theorem:\n";
     cout << "Please enter a number for a: ";
     cin  >> a;
     cout << "\nPlease enter a number for b: ";
     cin  >> b;
     
    cout << "\n" << a << " squared + " << b << " squared equals: " << hypotenuse(a,b);
     
    return 0;
 }
 