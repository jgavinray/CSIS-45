// File: Exercise11-2.cpp
 // Description: Exercise 11.2 #2
 // By: J. Gavin Ray
 // Date: 2/23/12
 
//A:
 
#include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 
using namespace std;
 
int main()
 {
     string filename = "testing.txt";
     string line;
     ifstream inFile;
     
    inFile.open(filename.c_str());
     
    if (inFile.fail())
     {
         cout << "\nThe File was not successfully opened.";
         cout << "\nPlease check that the file currently exists." << endl;
         exit (1);
     }
     
    while (getline(inFile,line))
         cout << line << endl;
     
    inFile.close();
     
    return 0;
     
}
 
//#B
// New Program 

#include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 
using namespace std;
 
int main()
 {
     string filename = "testing.txt";
     string line;
     ifstream inFile;
     
    inFile.open(filename.c_str());
     
    if (inFile.fail())
     {
         cerr << "\nThe File was not successfully opened.";
         cerr << "\nPlease check that the file currently exists." << endl;
         exit (1);
     }
     
    while (getline(inFile,line))
         cerr << line << endl;
     
    inFile.close();
     
    return 0;
     
}
 
// #C
// New Program 

#include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <string>
 
using namespace std;
 
int main()
 {
     string filename = "testing.txt";
     string line;
     ifstream inFile;
     
    inFile.open(filename.c_str());
     
    if (inFile.fail())
     {
         clog << "\nThe File was not successfully opened.";
         clog << "\nPlease check that the file currently exists." << endl;
         exit (1);
     }
     
    while (getline(inFile,line))
         clog << line << endl;
     
    inFile.close();
     
    return 0;
     
}
 
