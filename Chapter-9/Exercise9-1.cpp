// File: Exercise9-1.cpp
 
// Description: Exercise 9.1 #2
 
// By: J. Gavin Ray
 
// Date: 2/14/12
 

#include <cstdlib>
#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
 private:
 int hours;
 int minutes;
 int seconds;
 
public:
 Time(int = 0, int = 0, int = 0); // constructor
 Time(const Time&);
 void showtime();
};
 
Time::Time(int hrs, int mins, int secs)
{
 hours = hrs;
 
minutes = mins;
 
seconds = secs;
}
 
Time::Time(const Time& oldtime)
{
 hours = oldtime.hours;
 minutes = oldtime.minutes;
 seconds = oldtime.seconds;
}
 
void Time::showtime()
{
 cout << setfill('0');
 cout << setw(2) << hours << ':';
 cout << setw(2) << minutes << ':';
 cout << setw(2) << seconds;
 cout << endl;
 
return;
}
 
int main(int argc, char *argv[])
{
 Time a;
 Time b(12,30,01);
 Time c(06,15,39);
 Time d = b;
 
cout << "The time stored in a is ";
 a.showtime();
 cout << "The time stored in b is "; 
b.showtime();
 cout << "The time stored in c is "; 
c.showtime();
 cout << "The time stored in d is " ; 
d.showtime(); 
system("PAUSE");
 return EXIT_SUCCESS;
}

