#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str1 = "Touqeer ansari";
    string str2 = "Touqeer ibn Khursheed";
    string str3 = "Touqeer";

    // cout << str1 << endl;
    // cout << str2 << endl;

    // Add Two String..
    string concate = str1 + "" + str2;
    // cout << concate;

    // Accessing Characters
    char firstCharacter = str1[0];  //acces first character
    char LastCharacter = str1.back(); //acees last word in stirng

    cout << LastCharacter;

    

    return 0;
}
