// -------------------------Question-------------------------
// given an integer number n,return the diffirent the product of its digit and the sum it
// input:234
// output:15

// If n = 234, the product of its digits is 2 * 3 * 4 = 24, and the sum of its digits is 2 + 3 + 4 = 9. The difference is 24 - 9 = 15.

#include <iostream>
using namespace std;
int main()
{
    int n = 123;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;        // Extract the last digit
        product = product * digit; // Update product
        sum = sum + digit;         // Update sum
        n = n / 10;                // Move to the next digit
    }
    int diffirent = product - sum;
    cout << diffirent;
    return 0;
}
