// File: Exercise4-9.cpp
// Description: Exercise 4.9 #10
// By: J. Gavin Ray
// Date: 1/31/12
 

#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
 int f;
 int c;
 int choice;
 int FarenheitToCelsius;
 int CelsiusToFarenheit;
 
cout << "Tempature Calculator: J. Gavin Ray\n\n";
 cout << "\t1\tConvert Fahrenheit to Celsuis\n";
 cout << "\t2\tConver Celsuis to Fahrenheit\n";
 cout << "\t3\tQuit and go back to the Real World\n\n";
 cout << "Your choice: ";
 cin >> choice;
 
switch(choice)
 {
 
case 1:
 {
 cout << "Please enter the Farenheit Tempature: ";
 cin >> f;
 FarenheitToCelsius = (5/9) * (f - 32);
 cout << f << " degrees Farenheit is " << FarenheitToCelsius << " Celsius.\n";
 break;
 
} 
case 2:
 {
 cout << "Please enter the Celsius Tempature: ";
 cin >> c;
 CelsiusToFarenheit = ((9/5) * c) + 32;
 cout << c << " degrees Celcius is " << CelsiusToFarenheit << " Farenheit.\n";
 break;
 }
 case 3:
 {
 cout << "Thanks for using this program, goodbye.\n";
 }
 default:
 {
 cout << "You have entered an invalid option, goodbye.\n";
 break;
 }
 }
 
system("PAUSE");
 

return 0;
 

}

