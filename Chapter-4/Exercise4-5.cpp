// File: Exercise4-5.cpp
// Description: Exercise 4.5 #2
// By: J. Gavin Ray
// Date: 1/31/12
 

#include <iostream>
 
#include <cmath>
 
using namespace std;
 
int main()
{
 int month;
 int day;
 
cout << "Enter a month (use a 1 for Jan, etc.): ";
 cin >> month;
 
switch (month)
 {
 case 1:
 cout << "Enter a day of the month: ";
 cin >> day;
 if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 2:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 29)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 3:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 4:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 31)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 5:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 6:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 31)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 7:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 8:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 9:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 31)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 10:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 11:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 31)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 case 12:
 cout << "Enter a day of the month: ";
 cin >> day;
 
if (day > 0 && day < 32)
 {
 cout << "Thank you!\n";
 }
 else
 {
 cout << "You have entered a day number that is out of range.\n";
 }
 break;
 default:
 cout << "You have entered a month that is not in range.\n";
 break;
 }
 
system("PAUSE");
 
return 0;
}
