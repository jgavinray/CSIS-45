 // Filename: Exercise7-3.cpp
 // Description: Exercise 7.3 #2
 // By: J. Gavin Ray
 // Date: 2/12/12


#include <iostream>
 #include <string>
 
using namespace std;
 
int main()
 {
     int i;
     string str;
     
    cout << "Type in any sequence of characters: ";
     getline(cin, str);
     
    for (i = 0; i < str.length(); i++)
         str[i] = toupper(str[i]);
     
    cout << "The Characters just entered, in uppercase, are: \n\n" << str << endl;
     
    cin.ignore();
     
    return 0;
 }
 