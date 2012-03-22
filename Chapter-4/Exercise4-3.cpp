// File: Exercise4-3.cpp
 // Description: Exercise 4.3 #6
 // By: J. Gavin Ray
 // Date: 1/31/12
 
#include <iostream>
 #include <iomanip>
 
using namespace std;
 
int main()
 {
     double TimeInYears;
     double Tier1 = .0475;
     double Tier2 = .045;
     double Tier3 = .04;
     double Tier4 = .035;
     double Tier5 = .03;
     double Tier6 = .025;
     double Interest;
     
    cout << "\nTime on Deposit Calculator thingy:";
     cout << "\nPlease enter in years the amount of time you wish to deposit: ";
     cin  >> TimeInYears;
     
    if (TimeInYears >= 5)
     {
         Interest = (Tier1 * 100);
         cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier1 << " interest rate. (" << Interest << "%)";
     }
         else if (TimeInYears < 5 && TimeInYears >= 4)
         {
             Interest = (Tier2 * 100);
             cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier2 << " interest rate. (" << Interest << "%)";
         }
         else if (TimeInYears < 4 && TimeInYears >= 3)
         {
             Interest = (Tier3 * 100);
             cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier3 << " interest rate. (" << Interest << "%)";
         }
         else if (TimeInYears < 3 && TimeInYears >= 2)
         {
             Interest = (Tier4 * 100);
             cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier4 << " interest rate. (" << Interest << "%)";
         }
         else if (TimeInYears < 2 && TimeInYears >= 1)
         {
             Interest = (Tier5 * 100);
             cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier5 << " interest rate. (" << Interest << "%)";
         }
         else if (TimeInYears < 1)
         {
             Interest = (Tier6 * 100);
             cout << "\n\nA " << TimeInYears << " year deposit will yield an " << Tier6 << " interest rate. (" << Interest << "%)";
         }
         
    return 0;  
        
    
}
 