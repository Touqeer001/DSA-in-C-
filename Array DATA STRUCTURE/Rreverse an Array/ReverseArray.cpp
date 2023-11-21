// #include <iostream>
// using namespace std;

// int PrintArray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i];
//     }
// }
// int ReverseArrray(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main()

// {
//     int n;
//     int a[] = {5, 4, 3, 2, 1};
//     int size = sizeof(a) / sizeof(a[0]);
//     // PrintArray(a, size);
//     ReverseArrray(a, size);
//     PrintArray(a, size);

//     return 0;
// }

// EXPALE 987654321 REEVERSE THIS

#include <iostream>
using namespace std;

int PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

void ReverseArray(int a[], int n)
{

    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

int main()

{
    int a[] = {1, 4, 0, 5, -2, 15};
    int size = sizeof(a) / sizeof(a[0]);

    // So, when you call PrintArray(a, size); in your main function, you are passing the array a and its size size as arguments to the PrintArray function. The function then uses these parameters to iterate through the elements of the array and print them.
    PrintArray(a, size);
    cout << endl;
    ReverseArray(a, size);
    PrintArray(a, size);

    return 0;
}
