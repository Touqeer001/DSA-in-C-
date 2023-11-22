
// In C++, the post-increment operator (++) is used to increase the value of a variable by 1, but it returns the original value before the increment

#include <iostream>
using namespace std;
int main()
{

    int i = 3;
    int a = 2;
    int sum = a + (++i);
    cout << sum;
    // output 6

    int num = 5;
    int update = num++;
    cout << update;
    // cout << result;

    // output 6
    return 0;
}
