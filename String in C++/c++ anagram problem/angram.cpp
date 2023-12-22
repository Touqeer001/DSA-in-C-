// To check if two strings are anagrams, you can compare the frequency of characters in both strings. An anagram of a string should have the same frequency of each

// std::string s = "anagram";
//     std::string t = "nagaram";

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
