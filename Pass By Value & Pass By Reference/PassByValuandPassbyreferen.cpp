
// Feature	                  Pass by Value	                                          Pass by Reference
// Syntax	           void functionName(Type parameter)	                    void functionName(Type &parameter)
// Parameter         Initialization Receives a copy of the argument	         Receives a reference to the original argument
// Changes to Parameter Inside	   Do not affect the original value	               Affect the original value
// Overhead	                   May involve copying large objects	         No copying; more efficient for large objects
// Syntax for Caller	                functionName(variable)	                        functionName(variable)

#include <iostream>
using namespace std;

// pass by value function
void modifyByValue(int a)
{
    a = a + 2;
}
//Pass by Reference
void modifyByReference(int &a)
{
    a = a * 2;
}

int main()
{
    int number = 10;
    // Pass by Value
    cout << "Pass by Value - Before modification: " << number << endl;
    modifyByValue(number);
    cout << "Pass by value- After modification: " << number << endl;

    // Pass by Reference
    cout << "Pass by Reference - Before modification: " << number << endl;
    modifyByReference(number);
    cout << "Pass by Reference - After modification: " << number << endl;

    return 0;
}
