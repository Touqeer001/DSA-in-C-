// Question:Sort 0 and 1 From the array

// Original array: 0 1 0 1 1 0 1 0 0 1
// Array after sorting 0s and 1s: 0 0 0 0 0 1 1 1 1 1
// Explanation:

// We start by iterating through the array to count the number of 0s. In the given example, there are 5 zeros.

// We then iterate through the array again, filling it with the counted number of 0s followed by 1s. In this case, the first 5 elements are filled with 0s, and the rest with 1s.

// Time Complexity:

//  The algorithm makes two passes through the array, each taking O(n) time, where n is the size of the array.
// Therefore, the overall time complexity is O(n).
// Space Complexity:

// The algorithm uses a constant amount of space, regardless of the size of the array.
// Thus, the space complexity is O(1).
// This approach is efficient for sorting an array with only two distinct elements (0s and 1s) and is often referred to as the Dutch National Flag algorithm. If you have any further questions or if there's anything else you'd like to discuss, feel free to ask!

#include <iostream>
using namespace std;

int SortZeroandOne(int arr[], int size)
{
    int countZero = 0;

    // count the number of Zero in array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
    }

    for (int i = 0; i < countZero; i++)
    {
        arr[i] = 0; // this condition fill the 0 in array.
    }
    for (int i = countZero; i < size; i++)
    {
        arr[i] = 1;
    }
}

int main()
{

    int arr[] = {0, 1, 0, 1, 1, 1, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    SortZeroandOne(arr, size);

    cout << "\nArray after sorting 0s and 1s: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// Certainly! Let's go through the step-by-step process of the code, focusing on each iteration:
//  tep-by-step process for counting zeros:

// Initialize i to 0.
// Check if i (index) is less than the size of the array.
// i = 0, arr[0] = 0 (true): Increment countZeros by 1.
// i becomes 1.
// Check if i is less than the size of the array.
// i = 1, arr[1] = 1 (false): Do nothing.
// i becomes 2.
// Repeat steps 3-4 until i reaches the end of the array.
// After this loop, countZeros will be the total count of zeros in the array.

// Step-by-step process for filling array with 0s:

// Initialize i to 0.
// Check if i is less than countZeros.
// i = 0 (true): Set arr[0] to 0.
// i becomes 1.
// Check if i is less than countZeros.
// i = 1 (true): Set arr[1] to 0.
// i becomes 2.
// Repeat steps 3-4 until i reaches countZeros.

// Step-by-step process for filling array with 1s:

// Initialize i to countZeros.
// Check if i is less than the size of the array.
// i = 5 (true): Set arr[5] to 1.
// i becomes 6.
// Check if i is less than the size of the array.
// i = 6 (true): Set arr[6] to 1.
// i becomes 7.