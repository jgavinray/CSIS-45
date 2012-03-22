// File: Exercise3-6.cpp
 // Description: Exercise 3.6 #8
 // By: J. Gavin Ray
 // Date: 1/31/12
 
#include <iostream>
 #include <math.h>
 
using namespace std;
 
int main()
 {
     double radius;
     double distance;
     double volume;
     double pi = 3.14;
     
    cout << "\nVolume of Oil stored in an underground 200 foot deep cylindrical tank\n";
     cout << "The formula for calculating this is volume = pi * radius squared * (200 - distance)\n\n";
     cout << "Please enter a radius in feet: ";
     cin  >> radius;
     cout << "\nPlease enter the distance from top of tank to top of oil in feet: ";
     cin  >> distance;
 
    volume = pi * (pow (radius, 2)) * (200 - distance);
     
    cout << "pi = " << pi << " Radius = " << radius << " Distance = " << distance << "\n";
     cout << "Total Volume = " << volume;
     
    return 0;
     
}
 