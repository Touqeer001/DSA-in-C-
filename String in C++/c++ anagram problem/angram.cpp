// To check if two strings are anagrams, you can compare the frequency of characters in both strings. An anagram of a string should have the same frequency of each

// std::string s = "anagram";
//     std::string t = "nagaram";

// Two strings are considered anagrams if they have the same characters with the same frequency, even if the characters are arranged in a different order.
// For example, the strings "listen" and "silent" are anagrams because they use the same set of characters with the same frequency, just in a different order.

// Here's the general approach to solving this problem:

// Check Lengths: If the lengths of the two strings are different, they cannot be anagrams. In this case, return false.

// Character Frequency Counting: Use a data structure (like an unordered map) to count the frequency of each character in the first string (s). Then, iterate through the second string (t) and decrement the count for each character encountered.

// Check Counters: After processing both strings, check if all character counts are zero. If they are, then the strings are anagrams; otherwise, they are not.

#include <iostream>
using namespace std;
#include <unordered_map>

bool isAngram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, int> charCount;
    for (char c = 0; c <= s.length(); c++)
    {
        charCount[c]++;
    }

    // character count for second strin

    for (char a = 0; a <= t.length(); a++)
    {
        if (charCount.find(a) == charCount.end() || charCount[a] == 0)
        {
            return false;
        }
        charCount[a]--;
    }
    return true;
}
int main()
{

    string s = "anagrams";
    std::string t = "nagarams";

    if (isAngram(s, t))
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    return 0;
}
