// File: Exercise5-10.cpp
// Description: Exercise 5.10 #2 (Chapter Review)
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
 int n;
int count;
 int result;
 
cout << "This program will take the number two (2) to a user defined power\n";
 cout << "Please enter the power you want to take the number two (2) too: ";
 cin >> n;
 cout << "\n";
 
for (count = 2; count <= n; count++)
 {
result = pow(2,count);
cout << "Two to the " << count << " power is " << result << endl;
 }
 



system("PAUSE");
 return 0;
 
}
