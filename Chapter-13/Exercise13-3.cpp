// File: Exercise13-3.cpp
 // Description: Exercise 13.3 #2
 // By: J. Gavin Ray
 // Date: 2/23/12
 
#include <iostream>
 #include <cctype>
 
using namespace std;
 
void ConvertToUpper(char []);
 
int main()
 {
     const int MAXCHARS = 100;
     char message[MAXCHARS];
     
    cout << "\nType in any sequence of characters: ";
     cin.getline(message,MAXCHARS);
     
    ConvertToUpper(message);
     
    cout << "The characters just entered, in uppercase are: ";
     cout << message << endl;
     
    return 0;
 }
 
void ConvertToUpper(char message[])
 {
     for (int i = 0; message[i] != '\0'; i++)
         message[i] = toupper(message[i]);
     return;
 }
 