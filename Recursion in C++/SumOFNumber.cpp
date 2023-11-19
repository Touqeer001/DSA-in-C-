
// n=3
// sum=1+2+3=6

#include <iostream>
using namespace std;
int SumOFNumber(int n, int sum)
{

    // Base Case
    if (n < 0) // check 4<0/No
    {
        return sum;
    }
    return SumOFNumber(n - 1, sum + n); // 4-1,0+4  (3,4) ,(2,7), (1,9),(0,10)
}

int main()
{

    int n = 4;
    int result = SumOFNumber(n, 0);
    cout << result;

    return 0;
}

// output
// 10