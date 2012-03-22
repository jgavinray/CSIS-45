// File: Exercise5-7.cpp
// Description: Exercise 5.7 #4
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
 const int MAXNUMS = 20;
 
int num = 0;
 
cout << "NUMBER\t\tSQUARE\t\tCUBE\n";
 cout << "------\t\t------\t\t------\n";
 
do 
{
 
cout << setw(3) << num << "\t\t";
 cout << setw(3) << num * num << "\t\t";
 cout << setw(4) << num * num * num << endl;
 num = num +2;
} while (num <= MAXNUMS);
 system("PAUSE");
 return 0;
 
}
