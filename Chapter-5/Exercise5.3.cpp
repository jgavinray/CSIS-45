// File: Exercise5-3.cpp
// Description: Exercise 5.3 #2
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main(int argc, char *argv[])
{
 
int MAXNUMS; 
int count;
 double num, total;
 
cout << "\nPlease type in the total number of data values to be added: ";
 cin >> MAXNUMS;
 
count = 1;
 total = 0;
 
cout << setiosflags(ios::fixed) << setprecision(3);
 
while ( count <= MAXNUMS)
 {
 cout << "\nEnter a number: ";
 cin >> num;
 total = total + num;
 cout << "The total is now " << total;
 count++;
 }
 
cout << "\n\nThe final total is " << total << endl;
 
system("PAUSE");
 return EXIT_SUCCESS;
}

