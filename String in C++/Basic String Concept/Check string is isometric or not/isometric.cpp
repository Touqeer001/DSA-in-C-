// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to
// get t.
// All occurrences of a character must be replaced with another character while
// preserving the order of characters. No two characters may map to the same
// character, but a character may map to itself.
// Example 1:
// Input: s = "egg", t = "add"

// approach
// using two pointer unordered map
//  output:Are "egg" and "add" isomorphic? Yes

#include <iostream>
#include <unordered_map>
using namespace std;

bool areIsomorphic(string &s, string &t)
{
    int n = s.length();
    unordered_map<char, char> sFirst;
    unordered_map<char, char> tSecond;

    for (int i = 0; i < n; ++i)
    {
        // Check if the current characters in s and t have been mapped before
        if (sFirst.find(s[i]) == sFirst.end() && tSecond.find(t[i]) == tSecond.end())
        {
            // If not, create a mapping in both directions
            sFirst[s[i]] = t[i];
            tSecond[t[i]] = s[i];
        }
        // Iteration 1 (i = 0):

        // s[0] = 'e', t[0] = 'a'
        // Since both sToT and tToS are empty, a mapping is created: sToT['e'] = 'a' and tToS['a'] = 'e'.
        // Iteration 2 (i = 1):

        // s[1] = 'g', t[1] = 'd'
        // Both characters haven't been mapped before, so a new mapping is created: sToT['g'] = 'd' and tToS['d'] = 'g'.
        // Iteration 3 (i = 2):

        // s[2] = 'g', t[2] = 'd'
        // Here, s[2] has already been mapped to 'd' in sToT, but the mapping is consistent ('d' in tToS is also mapped to 'g'). So, no new mappings are created.
        // Result:

        // The mappings created are: sToT['e'] = 'a', tToS['a'] = 'e', sToT['g'] = 'd', tToS['d'] = 'g'.
        // The characters in s and t are consistently mapped, so the code returns true, indicating that the strings are isomorphic.
        else
        {
            // If a mapping exists, check if it is consistent
            if (sFirst[s[i]] != t[i] || tSecond[t[i]] != s[i])
            {
                return false; // Inconsistent mapping, not isomorphic
            }
        }
    }
    return true;
}

int main()
{
    // Example
    string s = "egg";
    string t = "add";

    bool result = areIsomorphic(s, t);

    cout << "Are \"" << s << "\" and \"" << t << "\" isomorphic? ";
    cout << (result ? "Yes" : "No") << endl;

    return 0;
}