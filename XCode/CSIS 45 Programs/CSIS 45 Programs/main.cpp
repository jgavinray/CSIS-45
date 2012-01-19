//
//  main.cpp
//  CSIS 45 Programs
//
//  Created by Gavin Ray on 1/19/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

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
