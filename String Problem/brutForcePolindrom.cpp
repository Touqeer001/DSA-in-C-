#include <iostream>
using namespace std;
#include <string>

// brute force approch
//  nitialization: int i = 0; - Start at the first character of the string.

// Condition Check: i < length / 2; - Check if i is less than half of the string's length. In this case, the length is 5, so the condition is true.

// Comparison: if (s[i] != s[length - 1 - i]) { - Compare the first character 'm' with the corresponding character from the end 'm'. They match.

// Increment and Repeat: i++ - Increment i to

bool Polindrom(string s)

{

    int length = s.length();
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string mystring = "HELLO";
    if (Polindrom(mystring))
    {
        cout << "String is polindrom" << endl;
    }
    else
    {
        cout << "Not";
    }

    return 0;
}