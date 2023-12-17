// Given two strings needle and haystack, return the index of the first occurrence
// of needle in haystack, or -1 if needle is not part of haystack.
// Example 1:
// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0

//  Brute Force Approach:
// Iterate through the haystack string and check at each position if the substring starting from that position matches the needle.
// If a match is found, return the current index.
// If the loop completes without finding a match, return -1.

#include <iostream>
#include <string>
using namespace std;

int strStr(string heystack, string needle)
{
    int m = heystack.length();
    int n = needle.length();

    for (int i = 0; i < m - n; i++)
    {

        int j;
        for (j = 0; j < n; j++)
        {
            if (heystack[i + j] != needle[j])
            {
                break;
            }
        }

        if (j == n)
        {
            return i; // Found a match
        }
    }
    return -1; // No match found
}
int main()
{
    std::string haystack = "touqeer";
    std::string needle = "eer";

    int result = strStr(haystack, needle);

    std::cout << "Index of the first occurrence: " << result << std::endl;

    return 0;
}