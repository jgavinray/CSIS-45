// File: Exercise9-2.cpp
 // Description: Exercise 9.2 #2
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 
using namespace std;
 
class Circle
 {
 private:
     int xCenter;
     int yCenter;
     double radius;
     static double scaleFactor;
 public:
 
    Circle(int, int, double);
     void showCircle();
 } ;
 
double Circle::scaleFactor = .05;
 
Circle::Circle(int x, int y, double r)
 {
 
    xCenter = x;
     yCenter = y;
     radius = r;
     
}
 

void Circle::showCircle()
 {
     cout << "xCenter = " << xCenter << "\tyCenter =  " << yCenter << "\tRadius = " << radius << "\tStatic scaleFactor = " << scaleFactor << endl;
 }
 
int main()
 {
     Circle a(3,4,5);
     
    a.showCircle();
     
    return 0;
     
}
 
