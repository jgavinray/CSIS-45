// File: Exercise12-2.cpp
 // Description: Exercise 12.2 #2
 // By: J. Gavin Ray
 // Date: 2/23/12

 #include <iostream>
 
using namespace std;
 
int main()
 {
     int i;
     
    
        double prices[8] = {16.25, 18.98, 23.75, 16.29, 19.54, 14.22, 11.13, 15.39};
     
    for (i = 0; i < 8; i++)
     {
         cout << "Value stored in array location prices[" << i <<"] is: "<< prices[i] << endl;
     }
     
    return 0;
 }
 