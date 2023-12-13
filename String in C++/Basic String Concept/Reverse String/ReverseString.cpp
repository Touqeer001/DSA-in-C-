//  reverse a string in
//  std::string str = "Hello, World!";

// The time complexity of this approach is O(n)
// The space complexity is O(1),

// output
// The reverse String is  olleH

#include <iostream>
using namespace std;
#include <string>
int main()
{

    string name = "Hello world";
    int start = 0;
    int end = name.length() - 1;

    while (start < end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;

        start++;
        end--;
    }
    cout << "The reverse String is  " << name;

    return 0;
}
