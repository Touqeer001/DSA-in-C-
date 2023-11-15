// Question
// 111
// 222
// 333
// 444
// -------------------------------------Explanation of above code---------------------------------------
// The outer loop (while (rows <= 5)) runs while rows is less than or equal to 5.
// The inner loop (while (cols <= 5)) prints the value of rows five times for each iteration of the outer loop.
// After printing five characters, it adds a newline (cout << endl;) to move to the next line.
// The increment for rows (rows = rows + 1;) is outside both loops, so it executes only once after the outer loop completes.
// Since the increment for rows is outside the outer loop, rows will always remain equal to 6 after the first iteration of the outer loop. As a result, the outer loop condition (while (rows <= 5)) will always be true, leading to an infinite loop.


 #include <iostream>

using namespace std;
int main()
{
    int rows = 1;
    while (rows <= 4)
    {
        int cols = 1;
        while (cols <= 3)
        {
            cout << rows;
            cols = cols + 1;
        }
        cout << endl;
        rows = rows + 1;
    }

    return 0;
}

