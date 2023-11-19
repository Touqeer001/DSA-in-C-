#include <iostream>
using namespace std;
int FactorialNumber(int n)
{
    // basecase
    if (n == 1) // 4==1/no
    {
        return 1;
    }

    return n * FactorialNumber(n - 1); // 4*FactorialNumber(4-1=3) 4*f(3)  3*f(2)    2*f(1)= 1    f(1)=1
}

int main()
{
    int n = 4;
    int result = FactorialNumber(n);
    cout << result;

    return 0;
}

// Output=24
// Time Complaxity of Factorial of number is O(n);
// space Complexity of Number  is O(n);
