

// Print Name 5 times using recursion..
// #include <iostream>
// using namespace std;

// void PrintName(int n)
// {

//     //  Base case: stop recursion when n becomes 0
//     if (n == 0)
//     {
//         return;
//     }
//     // Recursive case: print the name and call the function with n-1
//     cout << "Touqeer" << endl;
//     PrintName(n - 1);
// }

// int main()
// {
// // Call the printName function to print the name 5 times
//     PrintName(5);

//     return 0;
// }

#include <iostream>
using namespace std;
void PrintNumber(int start, int end)
{

    //  Base case: stop recursion when n becomes 0
    if (start > end) // The base case checks if start is greater than end, and if true, the recursion stops.
    {
        return;
    }
    // Recursive case:
    cout << start << endl;
    PrintNumber(start + 1, end);
}

int main()
{
    // Call the printName function to print the name 5 times
    PrintNumber(1, 5);

    return 0;
}

// -----------------------------------Execution Flow:-----------------------
// printNumbers(1, 10) is the initial call from main.
// The function prints 1, then makes a recursive call with start + 1 (printNumbers(2, 10)).
// This process repeats until start exceeds end, and the recursion stops

// -- -- -- -- -- -- -- -- -- -- -- -- --output-- -- -- -- -- -- -- -- -- -- -- -- --
// 1
// 2
// 3
// 4
// 5