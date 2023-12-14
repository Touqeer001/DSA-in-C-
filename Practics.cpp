

#include <iostream>
using namespace std;
#include <string>

int main()

{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    return 0;
}
