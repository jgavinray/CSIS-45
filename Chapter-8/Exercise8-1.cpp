// File: Exercise8-1.cpp
// Description: Exercise 8.1 #2
// By: J. Gavin Ray
// Date 2/14/2012
 
#include <cstdlib>
#include <iostream>
#include <iomanip>
 
using namespace std;
 
// Class Declaration
 
// A Section
class Time
{
 private:
 int hours;
 int minutes;
 int seconds;
 public:
 Time(int = 0,int = 0,int = 0); // constructor
 
void setTime(int, int, int); // member function to copy a time
 void showTime(); // member function to display time
};
 
// B Section
class Complex
{
 private:
 double real;
 double imaginary;
 public:
 Complex(double = 0, double = 0); // Constructor
 
void setComplex(double, double); // member function to copy a pair of doubles 
void showComplex();
};
 
// C Section
class Circle
{
 private:
 int xcenter;
 int ycenter;
 double radius;
 public:
 Circle(int = 0, int = 0, double = 0); // Constructor
 
void setCircle(int, int, double); // member function to set an integer value for xcenter, ycenter and a double radius
 void showCircle();
};
 
// D Section
class System
{
 private:
 string computer;
 string printer;
 string screen;
 double comPrice;
 double printPrice;
 double scrnPrice;
 public:
 
System(string = "Thank You ", string ="Dennie for your help ", string = "on these blasted strings!", double = 50, double = 100, double = 150);
 void setSystem(string, string, string, double, double, double);
 void showSystem();
};
// Implementation Section
 
// #A
Time::Time(int hrs, int mins, int secs)
{
 hours = hrs;
 minutes = mins;
 seconds = secs;
}
 
void Time::setTime(int hrs, int mins, int secs)
{
 hours = hrs;
 minutes = mins;
 seconds = secs;
 
}
 
void Time::showTime()
{
 cout << "Hours stored = " << hours << endl;
 cout << "Minutes stored = " << minutes << endl;
 cout << "Seconds stored = " << seconds << endl;
 cout << endl;
}
// # B
Complex::Complex(double rl, double imag)
{
 real = rl;
 imaginary = imag;
}
 
void Complex::setComplex(double rl, double imag)
{
 real = rl;
 imaginary = imag;
}
 
void Complex::showComplex()
{
 cout << "Stored in variable 'Real' = " << real << endl;
 cout << "Stored in variable 'Imaginary' = " << imaginary << endl;
 cout << endl; 
} 
// #C
 
Circle::Circle(int x,int y,double r)
{
 xcenter = x;
 ycenter = y;
 radius = r;
}
 
void Circle::setCircle(int x,int y,double r)
{
 xcenter = x;
 ycenter = y;
 radius = r;
}
 
void Circle::showCircle()
{
 cout << "Stored in variable 'xcenter' = " << xcenter << endl;
 cout << "Stored in variable 'ycenter' = " << ycenter << endl;
 cout << "Stored in variable 'radius' = " << radius << endl;
 cout << endl;
}
 
// #D
System::System(string cpu, string print, string scrn, double cp, double pp, double sp)
{
 computer = cpu;
 printer = print;
 screen = scrn;
 comPrice = cp;
 printPrice = pp;
 scrnPrice = sp; 
} 

void System::setSystem(string cpu, string print, string scrn, double cp, double pp, double sp)
{
 computer = cpu;
 printer = print;
 screen = scrn;
 comPrice = cp;
 printPrice = pp;
 scrnPrice = sp; 

}
 
void System::showSystem()
{
 cout << "String #1 stored = " << computer << endl;
 cout << "String #2 stored = " << printer << endl;
 cout << "String #3 stored = " << screen << endl;
 cout << "comPrice stored = " << comPrice << endl;
 cout << "printPrice stored = " << printPrice << endl;
 cout << "scrnPrice stored = " << scrnPrice << endl;
 cout << endl;
 
}
 

int main()
{
 Time a(9,30,15);
 Complex b(3.14567,9.996);
 Circle c(3,4,5);
 System d;
 
a.showTime();
 b.showComplex();
 c.showCircle();
 d.showSystem();
 
system("PAUSE");
 return EXIT_SUCCESS;
}

