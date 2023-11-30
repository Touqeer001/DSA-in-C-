//  To find the largest element in an array,
//   int arr[] = {3, 2, 1, 5, 2};
//  The largest element in the array is: 5

// explanation:
// Time Complexity: O(n)
//  Space Complexity: O(1)

#include <iostream>
using namespace std;

int FindLargestElement(int arr[], int size)
{

    if (arr[size] == 0)
    {

        cout << "Array is empty.";
        return -1; // Return a sentinel value or handle error as needed
    }
    int MaximumElement = arr[0]; // Assume the first element is the maximum
    for (int i = 0; i < size; i++)
    {

        if (arr[i] > MaximumElement)
        {
            // Update maxElement if a larger element is foun
            MaximumElement = arr[i];
        }
    }
    return MaximumElement;
}

int main()
{

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestElement = FindLargestElement(arr, size);

    if (largestElement != -1)
    {
        cout << "The largest element in the array is: " << largestElement << endl;
    }

    return 0;
}