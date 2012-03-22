// File: ForLoop.cpp
// Description: Using a For Loop Assignment
// By: J. Gavin Ray
// Date: 2/7/12
 
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
 int values;
 
for (values = 1; values <= 20; values = values + 2)
 cout << values << " " << pow(values, 2) << " " << sqrt(values) << "\n";
 
system("PAUSE");
 return 0;
 
}
