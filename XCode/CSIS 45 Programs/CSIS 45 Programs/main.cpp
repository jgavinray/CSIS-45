//
//  main.cpp
//  CSIS 45 Programs
//
//  Created by Gavin Ray on 1/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//


// File: Exercise2-5.cpp
// Description: Exercises 2.5
// By: J. Gavin Ray
// Date: 1/22/2012

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