#include <iostream>
using namespace std;

bool isCheckSpaceAndComma(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c;
}

bool isPalindrome(string &s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        // The below code is for ignoring all spaces and commas in the sentence
        // tring 1: "A man, a plan, a canal: Panama"
        //  Initial String: "A man, a plan, a canal: Panama"
        //  After Ignoring Non-Alphanumeric Characters: "AmanaplanacanalPanama"
        //  Start and End Pointers: start = 0, end = 22
        //  Comparison: Check if s[0] (A) is equal to s[22] (a) after converting both to lowercase. They are equal.
        //  Move Pointers: Increment start to 1 and decrement end to 21.
        //  Comparison: Check if s[1] (m) is equal to s[21] (A) after converting both to lowercase. They are equal.
        //  Continue: Repeat the process, ignoring spaces and punctuation, until start is greater than or equal to end.
        //  Since the comparisons continue to be equal for all alphanumeric characters, the string is determined to be a palindrome.
        while (start < end && !isCheckSpaceAndComma(s[start]))
        {
            start++;
        }

        // The below code is for converting the letter to lowercase
        // Comparison: Check if s[1] (m) is equal to s[21] (A) after converting both to lowercase. They are equal.
        while (start < end && !isCheckSpaceAndComma(s[end]))
        {
            end--;
        }

        // Compare lowercase characters
        if (toLower(s[start]) != toLower(s[end]))
        {
            return false; // Characters are not equal, not a palindrome
        }

        // Move to the next characters
        start++;
        end--;
    }

    return true; // Palindrome
}

int main()
{
    string palindromeExample = "MADAM";
    string nonPalindromeExample = "Race a car";

    cout << "\"" << palindromeExample << "\" is " << (isPalindrome(palindromeExample) ? "a palindrome." : "not a palindrome.") << endl;
    cout << "\"" << nonPalindromeExample << "\" is " << (isPalindrome(nonPalindromeExample) ? "a palindrome." : "not a palindrome.") << endl;

    return 0;
}