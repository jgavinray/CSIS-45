// File: Exercise12-3.cpp
 // Description: Exercise 12.3 #4
 // By: J. Gavin Ray
 // Date: 2/23/12
 
#include <iostream>
 
using namespace std;
 
const int MAXELS = 5;
 
int findMax(int [MAXELS]);
 int findMin(int [MAXELS]);
 
int main()
 {
     int nums[MAXELS] = {2, 18, 1, 27, 16};
     
    cout << "The maximum value is " << findMax(nums) << endl;
     cout << "The minimum value is " << findMin(nums) << endl;
     
    return 0;
 }
 
int findMax(int vals[MAXELS])
 {
     int i, max = vals[0];
     
    for (i = 0; i < MAXELS; i++)
         if (max < vals[i])
             max = vals[i];
     
    return max;
 }
 
int findMin(int vals[MAXELS])
 {
     int i, min = vals[0];
     
    for (i = 0; i < MAXELS; i++)
         if (min > vals[i])
             min = vals[i];
     
    return min;
 }
 