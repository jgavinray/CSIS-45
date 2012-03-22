// File: Exercise10-3.cpp
 // Description: Exercise 10.3 #2
 // By: J. Gavin Ray
 // Date: 2/22/12
 
#include <iostream>
 #include <iomanip>
 
using namespace std;
 
class Date
 {
 private:
     int month;
     int day;
     int year;
 public:
     Date(int = 2, int = 22, int = 2012);
     Date operator=(const Date&);
     void showDate();
 } ;
 
Date::Date(int mm, int dd, int yyyy)
 {
     this->month = mm;
     this->day = dd;
     this->year = yyyy;
 }
 
Date Date::operator=(const Date &newdate)
 {
     day = newdate.day;
     month = newdate.month;
     year = newdate.year;
     
    return *this;
 }
 
void Date::showDate()
 {
     cout << setfill('0');
     cout << setw(2) << this->month << "/";
     cout << setw(2) << this->day << "/";
     cout << setw(2) << this->year;
     
    return;
 }
 
int main()
 {
     Date a(4,1,1999);
     Date b(12,18,2005);
     Date c(2,22,2012);
     
    cout << "\nBefore assignment a's data value is ";
     a.showDate();
     cout << "\nBefore assignment b's data value is ";
     b.showDate();
     cout << "\nBefore assignment c's data value is ";
     c.showDate();
     cout << endl;
     
    a = b = c;
     
    cout << "\nAfter assignment a's data value is ";
     a.showDate();
     cout << "\nAfter assignment b's data value is ";
     b.showDate();
     cout << "\nAfter assignment c's data value is ";
     c.showDate();
     cout << endl;
     
    return 0;
 }
 
