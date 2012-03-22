// File: Exercise5-6.cpp
// Description: Exercise 5.6 #6
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
 double invested = 1000;
 int years;
 double interest;
 double earned;
 double compound;
 
for (interest = 0.06; interest <= 0.12; interest = interest + 0.01)
 {
invested = 1000;
 for (years = 1; years <= 10; years++)
 {
 
earned = interest * invested; 
cout << "$" <<invested << " at an interest rate of " << (interest * 100) << "% for year " << years << " will earn a profit of: $" << earned << "\n";
 invested = invested + earned;
 }
 cout << endl;
 }
 


system("PAUSE");
 return 0;
 
}
