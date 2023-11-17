// n C++, the pre-increment operator (++) is used to increase the value of a variable by 1, and it returns the updated value after the increment. Here's an example:

// #include <iostream>
// using namespace std;
// int main()
// {

//     int i = 4;
//     int a = 6;
//     int sum = a + (i);
//     cout << sum;

//     // int num = 3;
//     // int update = ++num;
//     // cout << update;
//     // // cout << result;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += i; // sum += i;: Add the current value of i to the running sum (sum).
        cout << sum;
    }
    return 0;
}
