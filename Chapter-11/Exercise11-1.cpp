// File: Exercise11-1.cpp
 // Description: Exercise 11.1 #4
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 #include <fstream>
 #include <cstdlib>
 
using namespace std;
 
int main()
 {
     ifstream inFile;
     
    inFile.open("test.txt");
     
    if (inFile.fail())
     {
         cout << "\nThe file was not successfully opened.";
         cout << "\nPlease check that the file currently exists." << endl;
         exit(1);
     }
     
    cout << "\nThe file has been successfully opened for reading." << endl;
     
    return 0;
 }
 

