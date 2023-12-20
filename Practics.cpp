
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std;
#include <string>

int main()

{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }

    return 0;
}
