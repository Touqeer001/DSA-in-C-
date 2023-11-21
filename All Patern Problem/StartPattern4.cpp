// 1 2 3
// 4 5 6
// 7 8 9
// -----------------------------------Explanation------------------------
// The outer loop (while (rows <= 3)) runs three times because it increments rows from 1 to 3.
// The inner loop (while (cols <= 3)) prints the value of count (post-incremented) for each iteration of the inner loop. The count starts at 1 and increments with each iteration of the inner loop.
// After printing three characters, it adds a newline (cout << endl;) to move to the next line.
// This process repeats until the outer loop completes, resulting in three rows of the sequence 123, 456, and 789.
#include <iostream>
using namespace std;
int main()
{
    int rows = 1;
    int count = 0;
    while (rows <= 3)
    {
        int cols = 1;
        while (cols <= 3)
        {
            cout << count + 1;
            count++;

            cols = cols + 1;
        }
        cout << endl;
        rows = rows + 1;
    }

    return 0;
}