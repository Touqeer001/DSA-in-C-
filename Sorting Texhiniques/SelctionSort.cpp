// procedure selectionSort(arr)
//     n = length(arr)
//     for i from 0 to n-2
//         minIndex = i
//         for j from i+1 to n-1
//             if arr[j] < arr[minIndex]
//                 minIndex = j
//         swap arr[i] and arr[minIndex



// ----------------------------------------------Selstion Sort-----------------------------
// Selection Sort:
// Approach:
// Selection Sort finds the minimum element in the unsorted part of the array and swaps it with the first unsorted element. 
//It repeats this process until the entire array is sorted.
// Number of Comparisons:
// It finds the minimum element in each pass, resulting in fewer comparisons compared to Bubble Sort.
// Number of Swaps:
// Swaps are performed only after finding the minimum element in a pass.
// Time Complexity:
// Worst-case, average, and best-case time complexity: O(n^2), where n is the number of elements in the array.

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // swap
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    const int size = 6;
    int arr[size] = {64, 40, 12, 500, 11, 1};

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    // Perform selection sort
    SelectionSort(arr, size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}


//output
// Original array: 64 25 12 22 11 1 
// Sorted array: 1 11 12 22 25 64 

// First Iteration (i = 0):

// minIndex = 0: Assume the first element is the minimum.
// Inner loop (j from i + 1 to n-1):
// Compare 25 with 64 (current min), 25 is smaller, so minIndex = 1.
// Compare 12 with 25 (current min), 12 is smaller, so minIndex = 2.
// Compare 22 with 12 (current min), no change.
// Compare 11 with 12 (current min), 11 is smaller, so minIndex = 4.
// Compare 1 with 11 (current min), 1 is smaller, so minIndex = 5.
// Swap arr[0] with arr[5]: {1, 25, 12, 22, 11, 64}.
// Second Iteration (i = 1):

// minIndex = 1: Assume the second element is the minimum.
// Inner loop (j from i + 1 to n-1):
// Compare 25 with 25 (current min), no change.
// Compare 12 with 25 (current min), 12 is smaller, so minIndex = 2.
// Compare 22 with 12 (current min), no change.
// Compare 11 with 12 (current min), no change.
// Swap arr[1] with arr[2]: {1, 12, 25, 22, 11, 64}.
// Third Iteration (i = 2):

// minIndex = 2: Assume the third element is the minimum.
// Inner loop (j from i + 1 to n-1):
// Compare 25 with 25 (current min), no change.
// Compare 22 with 25 (current min), 22 is smaller, so minIndex = 3.
// Compare 11 with 22 (current min), 11 is smaller, so minIndex = 4.
// Swap arr[2] with arr[3]: {1, 12, 11, 22, 25, 64}.