// File: Exercise9-3.cpp
 // Description: Exercise 9.3 #4
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 
using namespace std;
 
class Date
 {
     friend int dateCompare(Date &a, Date &b);
     
private:
     int month;
     int day;
     int year;
 public:
     Date(int = 2, int = 22, int = 2012); 
    int operator==(Date &);
 } ;
 
Date::Date(int mm, int dd, int yyyy)
 {
     month = mm;
     day = dd;
     year = yyyy;
 }
 int dateCompare(Date &a, Date &b)
 {
     if (a.day == b.day && a.month == b.month && a.year == b.year)
     {
         cout << "Dates are the same." << endl;
         return 1;
     }
     else
     {
         cout << "Dates are not the same." << endl;
         return 0;
     }
 }
 
int main()
 {
     Date a(4,1,2007);
     Date b(12,18,2009);
     Date c(4,1,2007);
     
    dateCompare(a,c);
     dateCompare(a,b);
     dateCompare(b,c);
     dateCompare(c,a);
     
    
    

    return 0;
 }
 