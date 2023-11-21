#include <iostream>
using namespace std;
#include <string>

// Two pointers (start and end) are initialized at the beginning and end of the string, respectively.
// In a while loop, characters at these positions are compared (s[start] != s[end]). If they are not equal, the function returns false.
// The pointers are then incremented and decremented, respectively, to move towards the center of the string.
// The loop continues until the start pointer is no longer less than the end pointer.
// If the loop completes without finding any mismatched characters, the function returns true, indicating that the string is a palindrome.
// This method is efficient and avoids creating a reversed copy of the string.




bool Polindrom(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (s[start] != s[end])

        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string mystring = "MADAM";
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