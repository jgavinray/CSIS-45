// File: Exercise5-2.cpp
// Description: Exercise 5.2 #4
// By: J. Gavin Ray
// Date: 1/31/12
 

#include <iostream>
#include <cmath>
 

using namespace std;
 
double liter(double a)
{
 return a * 3.785;
}
 

int main()
{
 int gallon = 10;
 
cout << "J. Gavin Ray - Exercise 5.2 #4:\n\n";
 
while (gallon <= 20)
{
 cout << gallon << " US gallons is equal to " << liter(gallon) << " liters.\n";
 gallon++;
}
 
system("PAUSE");
 
return 0;
 

}
