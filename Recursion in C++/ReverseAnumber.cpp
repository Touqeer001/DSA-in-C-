// number:12345
// ReverseNumber:54321:

#include <iostream>
using namespace std;
int main()
{
    int n = 12345;
    int reversenumber = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;  //give the last digit
        n = n / 10;  //Remove the last digit..
        reversenumber = (reversenumber * 10) + lastDigit;  
    }
    cout << reversenumber;

    return 0;
}
// ------------------------------OutPut------------------------
//Reversed Number: 54321

// Iteration 1: lastDigit = 5, n = 1234, reverseNumber = 5
// Iteration 2: lastDigit = 4, n = 123, reverseNumber = 54
// Iteration 3: lastDigit = 3, n = 12, reverseNumber = 543
// Iteration 4: lastDigit = 2, n = 1, reverseNumber = 5432
// Iteration 5: lastDigit = 1, n = 0, reverseNumber = 54321
