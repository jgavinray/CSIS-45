 // File: Exercise7-4.cpp
 // Description: Exercise 7.4 #4
 // By: J. Gavin Ray
 // Date: 2/12/12
 
#include <iostream>
 #include <string>
 #include <cctype>
 #include <algorithm>
 
using namespace std;
 
int main()
 {
     string textOne;
     string textTwo;
     string textSave;
     
    cout << "Enter some text: ";
     getline(cin, textOne);
 
    cout << "Enter a second string of text: ";
     getline(cin, textTwo);
 
//  Switching Strings
     
    textSave = textOne;
     textOne = textTwo;
     textTwo = textSave;
 
    cout << "Switching Strings\n";
     
    cout << textOne << endl;
     cout << textTwo << endl;
     
    return 0;
 }
 