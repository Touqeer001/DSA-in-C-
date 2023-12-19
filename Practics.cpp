
// Question:Checking array is sorted
//  int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {5, 4, 3, 2, 1};

#include <iostream>
using namespace std;
#include <string>

int IsSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {

        if (arr[i] > arr[i - 1])
        {
            return true;
        }
    }
    return false;
}

int main()

{
    int arr1[] = {1, 1, 111, 3, 4};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    if (IsSort(arr1, size))
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
