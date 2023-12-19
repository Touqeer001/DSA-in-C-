// Question:Checking array is sorted
//  int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {5, 4, 3, 2, 1};

// output:
//  In summary:Array1 is Sorted";

// Time Complexity : O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int IsSorte(int arr[], int size)
{
    //  for (int i = 1; i < size; i++)
    // {
    //     if (arr[i - 1] > arr[i])
    //     {
    //         return false;
    //     }
    // }

    for (int i = 0; i < size; i++)
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
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    if (IsSorted(arr, 5))
    {
        cout << "Array one is Sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    if (IsSorted(arr2, 5))
    {
        cout << "Array2 one is Sorted";
    }
    else
    {
        cout << "Array2 is not sorted";
    }

    return 0;
}
