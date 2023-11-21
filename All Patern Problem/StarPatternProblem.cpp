#include <iostream>

using namespace std;

int main()
{

    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            cout << "#";
            j = j + 1;
        }
        cout << endl; // Add a newline after each row of '#'
        i = i + 1;    // Move the increment inside the outer loop
    }

    return 0;
}
// -----------------------------explanation of above code------------------------------
// Explanation:

// The outer loop (while (i <= 5)) runs five times because it increments i from 1 to 5.
// The inner loop (while (j <= 5)) prints five '#' characters for each iteration of the outer loop.
// After printing five '#' characters, it adds a newline (cout << endl;) to move to the next line.
// This process repeats until the outer loop completes, resulting in five rows of five '#' characters each.
// .....................................OutPut...........................................
// #####
// #####
// #####
// #####
// #####