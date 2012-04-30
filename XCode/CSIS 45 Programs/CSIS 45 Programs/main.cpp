//
//  main.cpp
//  CSIS 45 Programs
//
//  Created by Gavin Ray on 1/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

// File: Exercise4-5.cpp
// Description: Exercise 4.5 #2
// By: J. Gavin Ray
// Date: 1/31/12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int month;
    int day;
    
    cout << "Enter a month (use a 1 for Jan, etc.): ";
    cin  >> month;
    
    month = ceil(month);
    month = floor(month);

    switch (month)
    {
        case 1:
            cout << "Enter a day of the month: ";
            cin >> day;
            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 2:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 29)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 3:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 4:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 31)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 5:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 6:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 31)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 7:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 8:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 9:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 31)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 10:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 11:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 31)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        case 12:
            cout << "Enter a day of the month: ";
            cin >> day;

            if (day > 0 && day < 32)
            {
                cout << "Thank you";
            }
            else
            {
                cout << "You have entered a day number that is out of range.";
            }
            break;
        default:
            cout << "You have entered a month that is not in range.";
            break;
    }
       
    return 0;
}



/*
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
*/
/*
// File: Exercise4-2.cpp
// Description: Exercise 4.2 # 4
// By: J. Gavin Ray
// Date: 1/31/12
#include <iostream>

using namespace std;

int main()
{
    const double LowInterest = 7;
    const double HighInterest = 8.5;
    double nyrs;
    double principal;
    
    cout << "Interest Calculator By J. Gavin Ray (Exercises 4.2 #4)\n";
    cout << "Please enter an amount to be deposited: ";
    cin  >> principal;
    cout << "Please enter the number of years " << principal << " is to be deposited: ";
    cin  >> nyrs;
    
    if (nyrs > 2)
    {
        cout << "Your principal will incure interest at the rate of: " << HighInterest << "%";
    }
    else
    {
        cout << "Your principal will insure interest at the rate of: " << LowInterest <<"%";
    }

    return 0;
}

*/

/*
// File: Sample4-2.cpp
// Description: Sample Program # 4.3
// By: J. Gavin Ray
// Date: 1/31/12

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float LOWRATE = 0.02;     // Lower tax rate
    const float HIGHRATE = 0.025;   // Higher tax rate
    const float CUTOFF = 20000.0;   // Cut off for low rate
    const float FIXEDAMT = 400;     // Fixed dollar amount for higher rate amounts
    
    double taxable, taxes;
    
    cout << "Please type in the taxable income: ";
    cin  >> taxable;
    
    if (taxable <= CUTOFF)
        taxes = LOWRATE * taxable;
    if (taxable >= 80000)           // Added this if statement - J. Gavin Ray
    {
        cout  << "Would love to help you, but you need to see a tax professional!";
    return 0;
    }
    else
        taxes = HIGHRATE * (taxable - CUTOFF) + FIXEDAMT;
    
    // set output format
    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::showpoint);
    cout << setprecision(2);
    
    cout << "Taxes are $ " << taxes << endl;
    
    return 0;
    
}
*/

/*
// File: Sample4.cpp
// Description: Sample Program # 4.7
// By: J. Gavin Ray
// Date: 1/31/12

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int opselect;
    double fnum, snum;
    
    cout << "Please type in two numbers: ";
    cin  >> fnum >> snum;
    cout << "Enter a select code: ";
    cout << "\n\n         1 for addition";
    cout << "\n         2 for multiplication";
    cout << "\n         3 for division";
    cout << "\n         4 to square the first numer";   // New
    cout << "\n         5 to square the second number"; // New
    cout << "\n         6 to raise the first number to the second number power"; // New
    cout << "\n\nPlease enter your choice: "; // New
    cin >> opselect;
    
    switch (opselect)
    {
        case 1:
            cout << "The sum of the numbers entered is " << fnum + snum;
            break;
        case 2:
            cout << "The product of the numbers entered is " << fnum * snum;
            break;
        case 3:
            cout << "The first number divided by the second number is " << fnum / snum;
            break;
// From here on is the new cases
        case 4:
            cout << fnum << " squared is " << fnum * fnum;
            break;
        case 5:
            cout << snum << " squared is " << snum * snum;
            break;
        case 6:
            cout << fnum << " to the " << snum << " power is " << pow (fnum, snum);
            break;
        default:
            cout << "You have entered an invalid selection, please run program again and select from the list.";
            break;
        
    } // End of switch
    
    cout << endl;
    
    return 0;
}
*/

/*
// File: Exercise3-6.cpp
// Description: Exercise 3.6 #8
// By: J. Gavin Ray
// Date: 1/31/12

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double radius;
    int distance;
    double volume;
    double pi = 3.14;
    
    cout << "\nVolume of Oil stored in an underground 200 foot deep cylindrical tank\n";
    cout << "The formula for calculating this is volume = pi * radius squared * (200 - distance)\n\n";
    cout << "Please enter a radius in feet: ";
    cin  >> radius;
    cout << "\nPlease enter the distance from top of tank to top of oil in feet: ";
    cin  >> distance;

    volume = pi * (pow (radius, 2)) * (200 - distance);
    
    cout << "pi = " << pi << " Radius = " << radius << " Distance = " << distance << "\n";
    cout << "Total Volume = " << volume;
    
    return 0;
    
}
*/
/*
// File: Exercise3-4.cpp
// Description: Exercise 3.4 #8
// By: J. Gavin Ray
// Date: 1/24/2012

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;
    
      cout << "\nSquare Root Calculator\n\n";
    cout << "Please enter a number to find the Square Root of: ";
    cin  >> a;
    cout << "\nThank you!\n\nThe square root of " << a << " is " << sqrt(a);    
         
    return 0;
}

*/
/*
// File: Exercise3-3.cpp
// Description: Exercise 3.3 #4
// By: J. Gavin Ray
// Date: 1/24/2012

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 1728.8964;
    double b;
    
    b = a;
    a = sqrt(a);
    a = sqrt(a);
    cout.precision(9);
    cout << "\nDisplaying the fourth root of " << b << ": " << a << "\n\n";
    
    return 0;
}
*/
// File: Chapter3.cpp
// Description: Exercise 3.1 #1, Exercise 3.2 #3, and Pythagorean Function
// By: J. Gavin Ray
// Date: 1/24/2012
/*
#include <iostream>
using namespace std;

float pythagorean(float a,float b)
{
    return (a * a) + (b * b);
}

float circumference(float a, float b)
{
    return 2 * a * b;
}

int main()
{

    double radius   = 3.3;          // Radius for Exercise 3.1 #1
    double pi       = 3.1416;       // Pi for Exercise 3.1 #1
    double c;                       // Variable for Exercise 3.1 #1

    int Fifteen = 3 * 5;            // Variable/Expression for Exercise 3.2 #3
    double Answer1 = 7.1 * 8.3 - 2.2; // Variable/Expression for Exercise 3.2 #3
    double Answer2 = 3.2 / (6.1 * 5); // Variable/Expression for Exercise 3.2 #3
    
    float a;
    float b;
    
// Begin Exercise 3.1 #1
    
    cout    << "\nExercise 3.1 #1 - Finding the Circumference of a Circle:\n";
    cout    << "Formula 2 * pi * radius\n\n";
    cout    << "Pi = " << pi << " Radius = " << radius << "\n";
    c = circumference(pi, radius);                                      // Call function to do the Math
    cout    << "Circumference of Circle: " << c << "\n\n";
    
//  End Exercise 3.1 #1
//  Begin Exercise 3.2 #3
    
    cout    << "Exercise 3.2 #3 - Calculate/Display Results from Expressions\n";
    cout    << "3.0 * 5.0 = " << Fifteen << "\n";
    cout    << "7.1 * 8.3 - 2.2 = " << Answer1 << "\n";
    cout    << "3.2 / (6.1 * 5) = " << Answer2 << "\n\n";
// End Exercise 3.2 #3
// Begin Hopefully Something Interesting
    
    cout    << "Hopefully Something Interesting, going to call a function that uses the Pythagorean Theorem!\n";
    cout    << "Please enter a number: ";
    cin     >> a;
    cout    << "\nThank you, please enter another number: ";
    cin     >> b;
    cout    << "\nFunction called, the answer of A squared + B squared = " << pythagorean(a,b) << ".  Hopefully it gets the grade!\n";
    
    
    return 0;
}
*/
 
/*
// File: Exercise2-7.cpp
// Description: Exercises 2.5 #10
// By: J. Gavin Ray
// Date: 1/22/2012

#include <iostream>
#include <cmath>
using namespace std;

int amount(int a, double b, double c)
{
    return a * pow((1 + b), c);
}

int main()
{

    
    int A = 24;              // Amount
    double I = 4;              // Interest
    double N = 300;              // Years Compounded
    int StopProgram;    // Stop Program Variable
    
    cout << "\nInterest Calculator by J. Gavin Ray\n";

    cout << "-----------------------------------\n\n";
   
    cout << "Please enter an Initial Deposit:\t$" << A;
    
    cout << "\nPlease enter an Interest Rate:\t\t" << I << "%";
    
    I = I / 100;                // Easier on my brain to just deal with a whole % above
    
    cout << "\nPlease enter a Time Frame in Years:\t" << N;
    
    cout << "\n\nTotal amount after " << N << " years is:\t\t$" << amount(A,I,N) << "\n";
    
    cin  >> StopProgram;
    
    return 0;
}

*/
















// File: Exercise2-5.cpp
// Description: Exercises 2.5
// By: J. Gavin Ray
// Date: 1/22/2012

/*
#include <iostream>
using namespace std;

// Feeling lazy so creating something to do the math for me.

int add(int a,int b)
{
    return a + b;
}


int main()
{

    int ProblemEight1 = 12;                                 // Problem #8 Variable
    int ProblemEight2 = 33;                                 // Problem #8 Variable
    int ProblemEightSum = ProblemEight1 + ProblemEight2;    // Problem #8 Variable
    int num1 = 16;                                          // Problem #10 Variable
    int num2 = 18;                                          // Problem #10 Variable
    int total = num1 + num2;                                // Problem #10 Variable
    int average = total / 2;                                // Problem #10 Variable
    int StopProgram;                                        // Used for Stopping the Program
    
    // Problem #8
    
    cout << "Problem #8 on Page 91:\n\n";
    cout << "ProblemEight1 :\t\t\t" << ProblemEight1 << "\n";
    cout << "ProblemEight2 :\t\t\t" << ProblemEight2 << "\n";
    cout << "Sum of " << ProblemEight1 << " and " << ProblemEight2 << ":\t\t" << ProblemEightSum << "\n\n\n";


    // Problem #10    
    
    cout << "Problem #10 on Page 91:\n\n";
    cout << "Integer stored in num1 =\t\t" << num1 << "\n";
    cout << "Integer stored in num2 =\t\t" << num2 << "\n";
    cout << "The total of " << num1 << " and " << num2 << " equals:\t" << total << "\n";
    cout << "The average of " << add(num1, num2) << " is: \t\t\t" << average << "\n";
    cin  >> StopProgram;        // Used for Stopping the Program
    
}
*/
 
 
 
 
// File: Program2-5.cpp
// Description: Program 2.5 from Page 67
// By: J. Gavin Ray
// Date: 1/19/2012

/*
#include <iostream>
using namespace std;

int main()
{
    int StopProgram;    //  Used to stop output, nothing more.
    cout << "\nData Type Bytes";
    cout << "\n---------------";
    cout << "\nint\t\t\t" << sizeof(int);
    cout << "\nchar\t\t" << sizeof(char);
    cout << "\nbool\t\t" << sizeof(bool);
    cout << "\nfloat\t\t" << sizeof(float);
    cout << "\ndouble\t\t" << sizeof(double);
    cout << "\nlong double\t" << sizeof(long double);
    cin  >> StopProgram;
    
    return 0;
}
*/
 
// File: Computers.cpp
// Description:  Basic Output Program
// Gavin Ray
// Date: 1/19/2012

/*
#include <iostream>
using namespace std;

int main()
{
    char StopProgram;     // Used to to stop outputs nothing more.
    cout << "Computers, computers everywhere\n";
    cout << "as far as I can C\n\n";
    cout << "And now all I C is C++ (CPP)!\n\n";
    cout << "Into the near future I C Java, followed closely by Ruby!\n\n";
    cout << "And into the far future I barely see Rails...\n\n";
    cout << "- J. Gavin Ray\n";
    cin  >> StopProgram;  // Used to stop outputs nothing more.
    
    return 0;
    
}
*/


// File: MyName.cpp
// Description:  Displaying My Name and Address
// Gavin Ray
// Date: 1/19/2012

/*
#include <iostream>
using namespace std;

int main()
{
    char StopProgram;     // Variable to allow cin to stop program.
    
    cout << "Brought to you by:\n\n";
    cout << "J. Gavin Ray\n";
    cout << "200 Burnett Ave #123\n";
    cout << "Morgan Hill, Ca\n";
    cout << "95037\n\n";
    cout << "Sponsered by: Gavilan College\n\n";
    cin  >> StopProgram;  // Used just to stop output for screen shot.
    
    return 0;
    
}
*/


// File: Hello.cpp
// Description: Displays the Classic Hellow World!
// Gavin Ray
// Date 1/19/2012

/*
#include <iostream>
using namespace std;

int main()
{
    int StopProgram;
    cout << "Hello World!\n";
    cin  >> StopProgram;
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    cout << "\nData Type Bytes";
    cout << "\n---------------";
    cout << "\nint\t\t\t" << sizeof(int);
    cout << "\nchar\t\t" << sizeof(char);
    cout << "\nbool\t\t" << sizeof(bool);
    cout << "\ndouble\t\t" << sizeof(double);
    cout << "\nfloat\t\t" << sizeof(float);
    cout << "\nlong double\t" << sizeof(long double);
    cout << '\n';
    return 0;
}
*/