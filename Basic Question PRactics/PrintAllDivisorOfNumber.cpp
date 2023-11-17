// ------------------ print the factors of the number 10-------------------------


#include <iostream>
using namespace std;
int main()
{
    int number = 10;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}

//output 1 2 5 10
// Iteration 1: i = 1, 10 % 1 == 0 (factor found), prints 1
// Iteration 2: i = 2, 10 % 2 == 0 (factor found), prints 2
// Iteration 3: i = 3, 10 % 3 != 0 (no factor), does not print anything
// Iteration 4: i = 4, 10 % 4 != 0 (no factor), does not print anything
// Iteration 5: i = 5, 10 % 5 == 0 (factor found), prints 5
// Iteration 6: i = 6, 10 % 6 != 0 (no factor), does not print anything
// Iteration 7: i = 7, 10 % 7 != 0 (no factor), does not print anything
// Iteration 8: i = 8, 10 % 8 != 0 (no factor), does not print anything
// Iteration 9: i = 9, 10 % 9 != 0 (no factor), does not print anything
// Iteration 10: i = 10, 10 % 10 == 0 (factor found), prints 10