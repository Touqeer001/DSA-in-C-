

#include <iostream>
using namespace std;
int main()
{
    unsigned long long n = 12345678911234567ULL;
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10; // If number is 123, after number /= 10, it becomes 12.
                    // If number is 5678, after number /= 10, it becomes 567.
    }
    cout << count;

    return 0;
}
