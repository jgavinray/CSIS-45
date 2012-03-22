// File: Exercise7-2.cpp
 // Description: Exercise 7.2 #4
 // By: J. Gavin Ray
 // Date: 2/12/12
 
#include <iostream>
 #include <cmath>
 #include <string>
 
using namespace std;
 
int main()
 {
     string message;
     long int numChars;
     int i;
     int aCount;
     int eCount;
     int iCount;
     int oCount;
     int uCount;
     int vowelCount;
     
    
    cout << "Please enter a string:\n";
     getline(cin, message);
     
    numChars = message.length();  
    for (i = 0; i < numChars; i++)
     {
         switch(message.at(i))
         {
             case 'a':
                 aCount++;
                 vowelCount++;
                 break;
             case 'e':
                 eCount++;
                 vowelCount++;
                 break;
             case 'i':
                 iCount++;
                 vowelCount++;
                 break;
             case 'o':
                 oCount++;
                 vowelCount++;
                 break;
             case 'u':
                 uCount++;
                 vowelCount++;
                 break;
 
        }
     }
 
    
    cout << "\nThe string you entered is " <<  numChars << " character's long and has "<< vowelCount << " vowels." << endl;
     cout << aCount << " a's\n" << eCount << " e's\n" << iCount << " i's\n" << oCount << " o's\n" << uCount << " u's" << endl;
 
    
    return 0;
 }
 