// File: Exercise8-2.cpp
// Description: Exercise 8.2 #4
// By: J. Gavin Ray
// Date 2/14/2012

/* 
Constructor:
 
A constructor function is any function that has the same name as its class. The purpose of a constructor is to initialize a new object's data members.
 

Overloaded Constructor:
Allows the same function name to be used with different parameter lists. 
Based on the supplied argument types, the compiler determines which function to use when the call is encountered.
*/
 


 
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
 Time(int, int, int); // constructor
 Time(long); // Long Constructor
 void showTime();
};
 
Time::Time(int hrs, int mins, int secs)
{
hours = hrs;
 
minutes = mins;
 
seconds = secs;
}
 
Time::Time(long sec)
{
 long hr;
 long mn; 
mn = sec / 60;
 hr = mn / 60;
 minutes = mn;
 hours = hr;
 seconds = sec;
}
 
void Time::showTime()
{
 cout << setfill('0');
 cout << setw(2) << hours << ':';
 cout << setw(2) << minutes << ':';
 cout << setw(2) << seconds;
 cout << endl;
 
return;
}
 
int main()
{
long a;
int b;
int c;
int d; 
cout << "Counting seconds" << endl << "Please enter a number in seconds: ";
cin >> a;
cout << "\nPlease enter an hour value: ";
cin >> b;
cout << "\nPlease enter a minute value: ";
cin >> c;
cout << "\nPlease enter a second value: ";
cin >> d;
Time Single(a); // Calling Single Constructor
Time Triple(b,c,d);
 
cout << "\nFrom left to right " << a << " seconds is equal to Hours:Minutes:Seconds." << endl;
Single.showTime();
cout << "\nTime Value" << endl;
Triple.showTime();
 

system("PAUSE");
 return EXIT_SUCCESS;
}

