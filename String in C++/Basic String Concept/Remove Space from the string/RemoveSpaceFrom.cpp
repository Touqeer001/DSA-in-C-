#include <iostream>
using namespace std;
#include <string>

void reverseString(std::string &s, int start, int end)
{
    while (start < end)
    {
        std::swap(s[start], s[end]);
        start++;
        end--;
    }
}

std::string reverseWords(std::string s)
{
    int n = s.length();
    int start = 0;
    int end = 0;

    // Reverse the entire string
    reverseString(s, 0, n - 1);

    // Reverse each word individually
    while (end < n)
    {
        while (end < n && s[end] != ' ')
        {
            end++;
        }

        reverseString(s, start, end - 1);

        // Move to the next word (skip spaces)
        while (end < n && s[end] == ' ')
        {
            end++;
        }
        start = end;
    }

    return s;
}

int main()
{
    std::string input = "the     sky is blue";
    std::string output = reverseWords(input);

    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;

    return 0;
}