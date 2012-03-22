// File: Exercise5-5.cpp
// Description: Exercise 5.5 #4
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
 int MAXNUMS;
 
int i;
 double usenum, postot, negtot;
 
postot = 0;
 
negtot = 0;
 
cout << "Please the amount of times you wish to input to this program: ";
 cin >> MAXNUMS;
 
for (i = 1; i <= MAXNUMS; i++)
 {
 cout << "Enter a number (positive or negative): ";
 cin >> usenum;
 if (usenum > 0)
 postot = postot + usenum;
 else
 negtot = negtot + usenum;
 }
 
cout << "The positive total is " << postot << endl;
 cout << "The negative total is " << negtot << endl;
 

system("PAUSE");
 return 0;
 
}
