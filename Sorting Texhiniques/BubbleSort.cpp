

// -------------------------------bubleSort-----------------------------------
// Bubble Sort:
// Approach:
// Bubble Sort compares and swaps adjacent elements if they are in the wrong order, and it repeats this process until the entire array is sorted.
// Number of Comparisons:
// In each pass, it compares each element with its adjacent element, potentially resulting in many comparisons.
// Number of Swaps:
// Swaps are performed after each pair of elements is compared and found to be in the wrong order.
// Time Complexity:
// Worst-case and average time complexity: O(n^2), where n is the number of elements in the array.
// Best-case time complexity: O(n) (when the array is nearly sorted).

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int size = 6;
    int arr[size] = {64, 25, 12, 22, 11, 1};

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    // Perform bubble sort
    BubbleSort(arr, size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// -------------------------------output---------------------------
// Original array: 64 25 12 22 11 1
// Sorted array: 1 11 12 22 25 64

// ---------------------------------Expalantion---------------------------
// Certainly! Let's walk through the bubbleSort algorithm step by step using the example array arr = {64, 25, 12, 22, 11, 1}:

// Step 0 (Initial State):

// i = 0, j iterates from 0 to 4.
// Step 1 (First Pass):

// Compare arr[0] (64) and arr[1] (25). Swap them because they are in the wrong order. The array becomes: {25, 64, 12, 22, 11, 1}.
// Compare arr[1] (64) and arr[2] (12). Swap them. The array becomes: {25, 12, 64, 22, 11, 1}.
// Compare arr[2] (64) and arr[3] (22). Swap them. The array becomes: {25, 12, 22, 64, 11, 1}.
// Compare arr[3] (64) and arr[4] (11). Swap them. The array becomes: {25, 12, 22, 11, 64, 1}.
// Compare arr[4] (64) and arr[5] (1). Swap them. The array becomes: {25, 12, 22, 11, 1, 64}.
// The largest element (64) is now at the correct position.
// Step 2 (Second Pass):

// i = 1, j iterates from 0 to 3.
// Compare and swap elements as needed. The array becomes: {12, 22, 11, 1, 25, 64}.
// Step 3 (Third Pass):

// i = 2, j iterates from 0 to 2.
// Compare and swap elements as needed. The array becomes: {12, 11, 1, 22, 25, 64}.
// Step 4 (Fourth Pass):

// i = 3, j iterates from 0 to 1.
// Compare and swap elements as needed. The array becomes: {11, 1, 12, 22, 25, 64}.
// Step 5 (Fifth Pass):

// i = 4, j iterates from 0 to 0.
// Compare and swap elements as needed. The array becomes: {1, 11, 12, 22, 25, 64}.
// The array is now sorted. The algorithm completes after the fifth pass because no more swaps are needed.