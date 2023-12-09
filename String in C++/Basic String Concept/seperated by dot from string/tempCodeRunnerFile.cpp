#include <iostream>
// using namespace std;
// #include <string>

// void reverseString(string &s, int start, int end)
// {

//     start = 0;
//     end = s.length() - 1;
//     while (start < end)
//     {
//         swap(s[start], s[end]);
//         start++;
//         end--;
//     }
// }

// string reverseWordWithoutDot(string s)
// {
//     int n = s.length();
//     int start;
//     int end;

//     while (end < n)
//     {
//         // Find the end index of the current word
//         while (end < n && s[end] != ' ' && s[end] != '.')
//         {
//             end++;
//         }
//         reverseString(s, 0, end - 1);

//         while (end < n && (s[end] == ' ' || s[end] == '.'))
//         {
//             end++;
//         }
//         start = end;
//     }
//     // Remove dots from the string
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '.')
//         {
//             s.erase(i, 1);
//             i--; // Adjust the index after erasing
//         }
//     }
//     //   s.erase(std::remove(s.begin(), s.end(), '.'), s.end());

//     return s;
// }

// int main()
// {
//     std::string input = "touqeer.ansari.khursheed";
//     std::string output = reverseWordWithoutDot(input);

//     std::cout << "Input: \"" << input << "\"" << std::endl;
//     std::cout << "Output: \"" << output << "\"" << std::endl;

//     return 0;
// }