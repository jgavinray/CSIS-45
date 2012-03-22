// File: Exercise6-7.cpp
 // Description: Exercise 6.7 #2
 // By: J. Gavin Ray
 // Date: 2/12/12
 
#include <iostream>
 #include <cmath>
 #include <ctime>
 
using namespace std;
 
int main()
 {
     const int NUMTOSSES = 1000;
     
    int heads;
     int tails;
     int i;
     int simulations;
     double haverage;
     double taverage;
     double flip, perheads, pertails;
     
    srand(time(NULL));
     
    for (simulations = 1; simulations <= 20; simulations++)
     {
         heads = 0;
         tails = 0;
 
    for (i = 1; i <= NUMTOSSES; i++)
     {
                 
        flip = double (rand())/RAND_MAX;
         if (flip > 0.5)
             heads = heads +1;
         else
             tails = tails +1;
         perheads = (heads / double (NUMTOSSES)) * 100.0;
         pertails = (tails / double (NUMTOSSES)) * 100.0;
 
    }
         haverage = haverage + perheads;
         taverage = taverage + pertails;
         
    cout << "\nTotals for Simulation " << simulations;
     cout << "\nHeads came up " << perheads << " percent of the time";
     cout << "\nTails came up " << pertails << " percent of the time" << endl;
     }
     
    cout << "\nHeads came up an average of " << haverage / 20 << " times after 20 cycles.\n";
     cout << "\nTails came up an average of " << taverage / 20 << " times after 20 cycles.\n";
     return 0;
 }
 