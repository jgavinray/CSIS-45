
/* Answer to #2
 To retain a restricted type of access across derived classes, C++ provided a third access specification, protected.  Protected access behaved identically to private classes in that it only permits member or friend function access, but it permits this restriction to be inherited by any derived class.
 
Inheritance:
 Is the ability to derive one class from another class.
*/

// File: Exercise10-1.cpp
 // Description: Exercise 10.1 #4
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 #include <cmath>
 
using namespace std;
 
const double PI = 2.0 * asin(1.0);
 
class Circle
 {
 protected:
     double radius;
 public:
     Circle(double = 1.0);
     double calcval();
 } ;
 
Circle::Circle(double r)
 {
     radius = r;
 }
 
double Circle::calcval()
 {
     return (PI * radius * radius);
 }
 
class Sphere : public Circle
 {
 protected:
     double length;
 public:
     Sphere(double r = 1.0, double l = 1.0) : Circle(r), length(l) {}
     double calcval();
     
} ;
 
double Sphere::calcval()
 {
     return (4 / 3 * (Circle::calcval() * radius));  
}
 
int main()
 {
     Circle circle_1, circle_2(2);
     Sphere sphere_1(4);
     
    cout << "Checking math for Sphere Object: " << ((4 / 3) * (PI * (4 * 4 * 4))) << endl;
     cout << "The area of circle_1 is " << circle_1.calcval() << endl;
     cout << "The volume of sphere_1 is " << sphere_1.calcval() << endl;
     
    circle_1 = sphere_1;
     
    cout << "\nThe area of circle_1 is now " << circle_1.calcval() << endl;
     
    return 0;
 }
 