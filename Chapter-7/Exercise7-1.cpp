// File: Exercise7-1.cpp
 // Description: Program used for Exception Handling
 // By: J. Gavin Ray
 // Date: 2/12/12
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
int pythagorean(int a, int b)
 {
     return (a * a) + (b * b);
 }
 

int main()
 {
     int a;
     int b;
     bool needA = true;
     bool needB = true;
     
    cout << "\nPythagorean thingy with Exception Handling - J. Gavin Ray\n\n";
     
    while(needA)
     {
     try {
         cout << "\nPlease enter a whole number value for a: ";
         cin  >> a;
         if (a == 0)
             throw a;
     }
         catch(int aa)
         {
             cout << "Using " << aa << " as a value to a will not work and thus is invalid.\n";
             continue;
         }
     needA = false;
     }
     while(needB)    
    {
     try {
             cout << "\nPlease enter a whole number value for b: ";
             cin  >> b;
             if (b == 0)
                 throw b;
         }
         catch(int SomeDamnThing)
         {
             cout << "Using " << SomeDamnThing << " as a value to a will not work and thus is invalid.\n";
             continue;
         }    
    needB = false;
     }  
    cout << a << " squared + " << b << " squared = " << pythagorean(a,b) << endl;
     
    return 0;
     
    
}
 