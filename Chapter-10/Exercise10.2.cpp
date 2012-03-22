 // File: Exercise10-2.cpp
 // Description: Exercise 10.2 #1
 // By: J. Gavin Ray
 // Date: 2/23/12

 // #A
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
class One
 {
 protected:
     double a;
 public:
     One(double = 2.0);
     double f1(double);
     double f2(double);
 } ;
 
One::One(double val)
 {
     a = val;
 }
 
double One::f1(double num)
 {
     return (num/2);
 }
 
double One::f2(double num)
 {
     return (pow(f1(num),2));
 }
 
class Two : public One
 {
 public:
     double f1(double);
 } ;
 
double Two::f1(double num)
 {
     return (num /3);
 }
 

int main ()
 {
     One object_1;
     Two object_2;
 
    cout << "The computed value using a base class object call is " << object_1.f2(12) << endl;
     
    cout << "The computed value using a derived class object call is " << object_2.f2(12) << endl;
     
    return 0;
     
}
 
/*
#B
 

#4
 A virtual function specification tells the compiler to create a pointer to a function, but not fill in the value of the pointer until the function is actually called.  Then, at run time, and based on the object making the call, the appropriate function address is used.  This is different to a standard function in which the pointer is filled with a value at the time of compiling.  This function call that caused a pointer to be filled at the time of compiling is called static binding, as the value is assigned to the function is the first one the compiler encounters.
*/