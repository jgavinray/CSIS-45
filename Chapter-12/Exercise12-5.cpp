// File: Exercise12-5.cpp
 // Description: Exercise 12.5 #2
 // By: J. Gavin Ray
 // Date: 2/23/12
 
#include <iostream>
 
using namespace std;
 
int main()
 {
     const int ROWS = 3;
     const int COLS =4;
     int i, j, val[ROWS][COLS] = {8,16,9,52,3,15,27,6,14,25,2,10};
     
    for (i = 0; i < ROWS; i++)
     {
         for (j = 0; j < COLS; j++)
         cout << val[i][j] << " ";
         cout << endl;
     }
 return 0;  
}
 
