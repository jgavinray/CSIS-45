// File: Program2-5.cpp
// Description: Program 2.5 from Page 67
// By: J. Gavin Ray
// Date: 1/19/2012

#include <iostream>
using namespace std;

int main()
{
//    char StopProgram;       // Variable to Stop the Program Nothing Else
    cout << "\nData  Type  Bytes"
         << "\n----\t----\t-----"
         << "\nint\t\t"      < sizeof(int)
         << "\nchar\t\t"     < sizeof(char)
         << "\nbool\t\t"     < sizeof(bool)
         << '\n';
//    cin << StopProgram;

         return 0;
}
