// File: Exercise8-3b.cpp
 // Description: Exercises 8.3 #2
 // By: J. Gavin Ray
 // Date: 2/21/2012
 
#include <iostream>
 
using namespace std;
 
const int MAXFLOOR = 15;
class Elevator
{
 private:
 int currentFloor;
 public:
 Elevator(int = 1);
 void request(int);
} ;
 
Elevator::Elevator(int cfloor)
{
 currentFloor = cfloor;
 cout << "Another elevator is created..." << endl;
}
 
void Elevator::request(int newFloor)
{
 if (newFloor < 1 || newFloor > MAXFLOOR || newFloor == currentFloor)
 ;
 else if (newFloor > currentFloor)
 {
 cout << "\nStarting at Floor " << currentFloor << endl;
 while (newFloor > currentFloor)
 {
 currentFloor++;
 cout << "Going Up - Now at Floor " << currentFloor << endl;
 }
 cout << "Stopping at floor " << currentFloor << endl;
 }
 else // Move Elevator Down
 {
 cout << "\nStarting at Floor " << currentFloor << endl;
 while (newFloor < currentFloor)
 {
 currentFloor--;
 cout << "Going down, now at floor " << currentFloor << endl;
 }
 cout << "Stopping at floor " << currentFloor << endl;
 }
return;
}
 
int main()
{
 Elevator a;
 a.request(6);
 a.request(3);
 
Elevator b(5);
 b.request(1);
 b.request(12);
 

system("PAUSE");
 return EXIT_SUCCESS;
}

}
 