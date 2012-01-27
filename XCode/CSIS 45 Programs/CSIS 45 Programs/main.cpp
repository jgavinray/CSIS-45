//
//  main.cpp
//  CSIS 45 Programs
//
//  Created by Gavin Ray on 1/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//


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
    char Continue;
    
//    do {
      cout << "\nSquare Root Calculator\n\n";
    cout << "Please enter a number to find the Square Root of: ";
    cin  >> a;
    cout << "\nThank you!\n\nThe square root of " << a << " is " << sqrt(a);
    cout << "\n\nWould you like to check another Square Root? (Y/N)";
loop:
    cin  >> Continue;
//    } while ( Continue != 'N');  
    
// 842-6505
    switch (Continue)
    {
        case 'Y':
            cout << "\nSquare Root Calculator\n\n";
            cout << "Please enter a number to find the Square Root of: ";
            cin  >> a;
            cout << "\nThank you!\n\nThe square root of " << a << " is " << sqrt(a);
            cout << "\n\nWould you like to check another Square Root? (Y/N)";
            cin  >> Continue;
            break;
            case 'y':
            cout << "\nSquare Root Calculator\n\n";
            cout << "Please enter a number to find the Square Root of: ";
            cin  >> a;
            cout << "\nThank you!\n\nThe square root of " << a << " is " << sqrt(a);
            cout << "\n\nWould you like to check another Square Root? (Y/N)";
            cin  >> Continue;
            break;
            case 'N':
            cout << "\nEnd of Program.";
            break;
            case 'n':
            cout << "\nEnd of Program.";
            break;
        default:
            cout << "\nThat is not a Valid selection, please choose either Y or N: ";
            goto loop;
    }
    
         
    return 0;
}


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