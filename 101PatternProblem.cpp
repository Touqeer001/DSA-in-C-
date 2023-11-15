

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// Your provided code appears to be intended to print a pattern of alternating 0s and 1s in rows, based on the value of start. However, there's an issue with the outer loop condition (for(int i=1;i<5;i++)). It should be for(int i=1;i<=5;i++) to include the fifth iteration

// --------------------------------Logic Decode-------------------------
// The outer loop (for(int i=1; i<=5; i++)) controls the number of rows in the pattern and iterates from 1 to 5.
// The if (i % 2 == 0) condition resets the start value to 1 when i is even and leaves it at 0 when i is odd.
// The inner loop (for(int j=0; j<5; j++)) prints alternating 0s and 1s in each row, flipping the value of start with each iteration of the inner loop.

// In the line start = 1 - start;, 1 - start is a mathematical expression that evaluates to the complement of the current value of the variable start. This expression is commonly used to toggle between two values, typically 0 and 1.

// Here's how it works:

// When start is 0, 1 - start evaluates to 1 - 0, which is 1.
// When start is 1, 1 - start evaluates to 1 - 1, which is 0.
// So, the expression effectively toggles between 0 and 1. It's a concise way to switch the value of a binary variable (one that can only take on two values) between its possible states.

// In the context of your code:

#include <iostream>
using namespace std;
int main()
{

    int start = 1;
    for (int i = 2; i <= 5; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 2; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }

    return 0;
}