// File: Exercise6-1.cpp
 // Description: Exercise 6.1 #10
 // By: J. Gavin Ray
 // Date: 2/8/12
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
double Pi()
 {
     return 2.0 * asin(1.0);  
}
 
int main()
 {
     cout << "Pi is equal to: " << Pi();
     return 0;
 }
 