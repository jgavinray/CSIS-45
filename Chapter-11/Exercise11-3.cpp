// File: Exercise11-3.cpp
 // Description: Exercise 11.3 #4
 // By: J. Gavin Ray
 // Date: 2/23/12
 
#include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 
using namespace std;
 
int main()
 {
     string filename;
     string descrip;
     double price;
     
    cout << "\nPlease enter a full filename (including the extention [.txt for example]) to open: ";
     cin  >> filename;
     
    ifstream inFile;
     
    try {
         inFile.open(filename.c_str());
         if (inFile.fail()) throw filename;
         
        inFile >> descrip >> price;
         while (inFile.good())
         {
             cout << descrip << ' ' << price << endl;
             inFile >> descrip >> price;
         }
         
        inFile.close();
         
        return 0;
         
    } catch (string filename) {
         cout << "\nThe file \"" << filename << "\" was not successfully opened." << endl;
         cout << "Please check that the file currently exists." << endl;
         exit(1);
     }
 }
 