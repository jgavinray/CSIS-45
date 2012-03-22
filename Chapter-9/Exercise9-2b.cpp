// File: Exercise9-2b.cpp
 // Description: Exercise 9.2 #4
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 
using namespace std;
 
class Circle
 {
     // Friends List
     friend double addRandScale(Circle&);
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
 
// Friend Implementation
 
double addRandScale(Circle &a)
 {
     cout << "\nRadius: " << a.radius << "\tTimes\t\tStatic Scale Factor: " << a.scaleFactor << " is equal too: " << (a.radius * a.scaleFactor) << endl;
     return 0;
 }
 
void Circle::showCircle()
 {
     cout << "xCenter = " << xCenter << "\tyCenter =  " << yCenter << "\tRadius = " << radius << "\tStatic scaleFactor = " << scaleFactor << endl;
 }
 
int main()
 {
     Circle a(3,4,5);    
    Circle b(8,9,10);
     a.showCircle();
     addRandScale(a);
     
    cout << "End of Program" << endl;
 

    
    
    
    return 0;
     
}
 