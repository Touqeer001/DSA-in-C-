// // n C++, functions are a fundamental building block of a program that allow you to organize and structure your code by encapsulating specific tasks or operations. Here's a basic overview of how functions work in C++

// ---------------------Function Declaration and Definition:-------------------------------------
// In C++, a function is declared and defined in two parts: the declaration (also known as the function prototype) and the definition. The declaration tells the compiler about the function's existence, and the definition provides the details of what the function does.

// -------------------------Function Parameters and Return Types-------------------------
// arameters: Functions can take input parameters, which are values passed to the function when it is called. In the example above, int a and int b are parameters of the add function.

// Return Type: Functions can also return a value to the caller. In the example, int before the function name add indicates that the function returns an integer value.

// -------------------------------------------Function Call:-----------------------
// In the main function, you call the add function with the arguments 5 and 3. The result of the add function is stored in the variable result.

// -------------------------------------------------Function Definition:-------------
// The actual implementation of the add function is provided after the main function. In this case, it takes two integer parameters, adds them, and returns the result.

#include <iostream>
using namespace std;
// Function declaration
int addTwoNumber(int a, int b);

double addTwoNumber(double a, double b); //Function Overloading:
int main()
{
    // function call
    int result = addTwoNumber(2, 3);
    double result2 = addTwoNumber(5, 3);

    cout << "The sum of Two Number is " << result2;
    cout << "The sum of Two Number is " << result;

    return 0;
}
// function defination
int addTwoNumber(int a, int b)
{
    return a + b;
}