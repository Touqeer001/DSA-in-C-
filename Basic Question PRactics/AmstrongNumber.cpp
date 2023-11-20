// -- -- -- -- -- -- -- -- -- -- -- -- -Armstrong number-- -- -- -- -- -- -- -- -- -- -- -- -- -an
//  n - digit number is an Armstrong number if the sum of its digits, each raised to the nth power, is equal to the number itself.153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153.

#include <iostream>
using namespace std;
int main()
{
    int number = 153;
    int reverseNumber = 0;
    int ORiginNumber = number;
    int sum = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        //    number=number/10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        number = number / 10;
    }
    if (sum == ORiginNumber)
    {
        cout << "Armstrong number ";
    }
    else
        cout << "Not a Armstrong number ";

    return 0;
}

// Armstrong number