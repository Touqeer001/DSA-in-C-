// 1
// 2 3
// 4 5 6
// 7 8 9

// -----------------------Explanation-----------------------------
// The outer loop (while (rows <= 4)) runs four times because it increments rows from 1 to 4.
// The inner loop (while (cols <= rows)) prints the value of count (incremented with each iteration) for each iteration of the inner loop. The number of iterations in the inner loop is determined by the value of rows.
// After printing the numbers, it adds a newline (cout << endl;) to move to the next line.
// This process repeats until the outer loop completes, resulting in four rows where the numbers are printed in a triangular pattern.

// -----------------------------------Important Point------------------------------
// count++:

// This is the post-increment operator.
// It increments the value of the variable count after the current value is used.
// For example, if count is initially 1, cout << count++; will output 1 and then increment the value of count to 2.

// count + 1:

// This is an expression that adds 1 to the current value of the variable count.
// However, it does not modify the value of count itself; it just evaluates to the result of the addition.
// If count is initially 1, cout << count + 1; will output 2, but the value of count remains unchanged.

#include <iostream>
using namespace std;
int main()
{

    int rows = 1;
    int count = 1;
    while (rows <= 4)
    {
        int cols = 1;
        while (cols <= rows)
        {
            cout << count;
            count++;

            cols = cols + 1;
        }
        cout << endl;

        rows = rows + 1;
    }

    return 0;
}
