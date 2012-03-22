// File: Exercise7-5.cpp
 // Description: Exercise 7.5 #4
 // By: J. Gavin Ray
 // Date: 2/12/12
 
#include <iostream>
 #include <string>
 #include <cctype>
 
using namespace std;
 
int main()
 {
     bool isvalidInt(string);
     string value;
     int number;
     
    cout << "Enter an integer: ";
     getline(cin, value);
     
    if (!isvalidInt(value))
     {
         cout << "The number you entered is not a valid integer.";
     }
     else
     {
         number = atoi(value.c_str());
         cout << "The interger you entered is " << number;
     
    }
     
    return 0;
 }
 
bool isvalidInt(string str)
 {
     int start =0;
     int i;
     bool valid = true;
     bool sign = false;
     
    if (str.length() == 0) valid = false;
     
    if (str.at(0) == '-' || str.at(0) == '+')
     {
         sign = true;
         start = 1;
     }
     if (sign && str.length() == 1) valid = false;
     
    i = start;
     while (valid && i < str.length())
     {
         if(!isdigit(str.at(i))) valid = false;
         i++;
     }
     return valid;
 }
 
