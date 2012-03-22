// File: Exercise9-1b.cpp
 
// Description: Exercise 9.1 #4
 
// By: J. Gavin Ray
 
// Date: 2/14/12
 
#include <iostream>
 
using namespace std;
 
class Car
{
 private:
 double engineSize;
 char bodyStyle;
 int colorCode;
 public:
 Car(double = 0, char = "X", int = 0);
 Car(const Car&);
 void showCar();
} ;
 
Car::Car(double engine, char style, int color)
{
engineSize = engine;
bodyStyle = style;
colorCode = color; 
}
 
Car::Car(const Car& oldData)
{
 engineSize = oldData.engineSize;
 bodyStyle = oldData.bodyStyle;
 colorCode = oldData.colorCode; 
}
 
void Car::showCar()
{
 cout << "Engine size =\t" << engineSize << endl;
 cout << "Body Style # =\t" << bodyStyle << endl;
 cout << "Color Code # =\t" << colorCode << endl;
 cout << endl;
 
return;
}
int main()
{ 
Car a(1,'E',95);
Car b(a);
 
a.showCar();
b.showCar();
 
system("PAUSE");
 return EXIT_SUCCESS;
}
