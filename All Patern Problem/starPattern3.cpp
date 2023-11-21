

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// ------------------------------Explanation-----------------------------
// The outer loop (while (rows <= 5)) runs five times because it increments rows from 1 to 5.
// The inner loop (while (cols <= 3)) prints the value of cols three times for each iteration of the outer loop.
// After printing three characters, it adds a newline (cout << endl;) to move to the next line.
// This process repeats until the outer loop completes, resulting in five rows of the sequence 123.

#include <iostream>
using namespace std;
int main()
{

    int rows = 1;
    while (rows <= 5)
    {
        int cols = 1;
        while (cols <= 3)
        {
            cout << cols;
            cols = cols + 1;
        }
        cout << endl;
        rows = rows + 1;
    }
    return 0;
}
