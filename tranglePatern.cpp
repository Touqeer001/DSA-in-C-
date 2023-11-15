// 1
// 2 1
// 3 2 1
// 4 3 2 1

// ..................................Explanation...........................
// The outer while loop (while (i <= 5)) controls the number of rows in the pattern, and it iterates from 1 to 5.
// The inner while loop (while (j <= i)) controls the number of columns in each row and iterates from 1 to the current value of i.
// In the inner loop, cout << i - j + 1; prints the value i - j + 1 for each iteration of the inner loop.
// So, for each row (outer loop iteration), the inner loop prints decreasing numbers, creating the pattern as shown above.

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}