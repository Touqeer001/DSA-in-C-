// ----------------------Polindrom of a number---------------------
// A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization). In other words, a palindrome remains unchanged when its characters are reversed.

// Examples of palindromic words:

// "level"
// "radar"
// "deified"

#include <iostream>
using namespace std;
int main()
{
    int number = 121;
    int originalNumber = number;
    // The line int originalNumber = number; is used to store the original value of the variable number before the while loop modifies it. The reason for this is that after the while loop, number becomes 0, and comparing it to reverseNumber would always result in true (since 0 is equal to 0).

    // By storing the original value in originalNumber, you can later compare it with reverseNumber to check if the original number is a palindrome.

    // Here's a breakdown of the logic:

    // originalNumber = number;: This line stores the original value of number before the while loop begins.

    // Inside the while loop, number is modified by removing its last digit in each iteration.

    // After the loop, number is 0, but originalNumber still holds the initial value.

    // if (originalNumber == reverseNumber): This condition checks whether the original number is equal to its reversed version.

    // Without storing the original value in originalNumber, you would be comparing 0 (the modified number variable) with reverseNumber, and the result would always be true.

    // This additional variable ensures that the comparison reflects whether the original number is a palindrome or not.
    int reversNumber = 0;

    while (number > 0)
    {
        int lastDigit = number % 10; // give last digit
        number = number / 10;        // Remove lastDigit
        reversNumber = (reversNumber * 10) + lastDigit;
    }
    if (originalNumber == reversNumber)
    {
        cout << "true";
    }
    else
        cout << "false";

    return 0;
}
// Iteration 1: lastDigit = 1, n = 12, reverseNumber = 1
// Iteration 2: lastDigit = 2, n = 1, reverseNumber = 12
// Iteration 3: lastDigit = 1, n = 0, reverseNumber = 121