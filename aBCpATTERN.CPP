// A A A
// B B B
// C C C

// The outer loop (while (row <= 3)) controls the number of rows printed, and it runs as long as row is less than or equal to 3.

// The inner loop (while (j <= 3)) controls the number of characters printed in each row and runs as long as j is less than or equal to 3.

// Inside the inner loop, the variable ch is assigned the value 'A' + row - 1. This means that the character printed in each iteration is based on the current value of row.

// The character ch is then printed using cout.

// After the inner loop completes, a newline (cout << endl;) is printed to move to the next line.

// Finally, the row variable is incremented, and the outer loop repeats the process.

// ------------------------------ASCII stands for "American Standard Code for Information Interchange."-------------

// The expression 'A' + 2 - 1 involves character arithmetic in C++. In ASCII encoding, characters are represented by numerical values. The character 'A' has an ASCII value of 65.

// So, 'A' + 2 - 1 would be equivalent to (65 + 2 - 1), which simplifies to 66. In terms of characters, the result corresponds to the character with the ASCII value 66, which is 'B'.

// Therefore, the output of the expression 'A' + 2 - 1 would be the character 'B'

#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    while (row <= 3)
    {
        int j = 1;
        while (j <= 3)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}