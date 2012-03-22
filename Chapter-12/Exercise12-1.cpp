// File: Exercise12-1.cpp
 // Description: Exercise 12.1 #6
 // By: J. Gavin Ray
 // Date: 2/23/12
 
#include <iostream>
 
using namespace std;
 
int main()
 {
     int i;
 
    
    double prices[8];
           
    prices[0] = 10.95;
     prices[1] = 16.32;
     prices[2] = 12.15;
     prices[3] = 8.22;
     prices[4] = 15.98;
     prices[5] = 26.22;
     prices[6] = 13.54;
     prices[7] = 6.45;
     prices[8] = 17.59;
     
    for (i = 0; i < 9; i++)
     {
         cout << prices[i] << "\t" << prices[++i] << "\t" << prices[++i] << endl;
     }
     
    cout << "\nThe value stored in prices[1] is " << prices[1] << endl;
     cout << "The value stored in prices[3] is " << prices[3] << endl;
     cout << "The value stored in prices[7] is " << prices[7] << endl;
     return 0;
 }
 
