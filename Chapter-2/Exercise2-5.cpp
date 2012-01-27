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
