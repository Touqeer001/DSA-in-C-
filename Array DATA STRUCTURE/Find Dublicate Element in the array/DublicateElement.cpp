// Question:find duplicate elements in an array
// Initial array: {1, 2, 3, 4, 5, 1, 4}
// output:dublicatr-1 and 4

// The condition myArray[i] != -1 checks whether the current element at index i in the array is not equal to - 1. This condition is used to ensure that the current element has not been marked as visited.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Iterate through the array
    for (int i = 0; i < size; i++)

    {
        // Check if the current element is not marked as visited
        if (arr[i] != -1)
        {
            int count = 1; // Initialize count for the current element
            for (int j = i + 1; j < size; j++)
            {

                // Check for duplicates
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1; // Mark the duplicate as visited
                }
            }
            if (count > 1)
            {
                cout << "The duplicate number is " << arr[i] << endl;
            }
        }
    }

    return 0;
}

// ------------------------------------------Space Complexity:--------------------------------------------------
// The space complexity is O(1) or constant. The only additional space used is for the loop variables and the count variable. The algorithm does not use any data structures that grow with the input size, so the space complexity is constant.

// -----------------------------------------------------Time Complexity-------------------------------------------------
// The time complexity of the provided code is O(n^2), where n is the size of the array. This is because there are nested loops: the outer loop iterates through each element in the array, and the inner loop searches for duplicates starting from the current element. In the worst case, each element is compared with every other element, resulting in a quadratic time complexity.

// -------------------Explanation-------------------------
// Initial array: {1, 2, 3, 4, 5, 1, 4}
// Iteration 1 (i = 0):
// Current element: 1
// Count the occurrences of 1 in the rest of the array: 1 appears at index 5.
// Mark index 5 as visited by setting myArray[5] = -1.
// Print: Duplicate element: 1 (Count: 2)
// Iteration 2 (i = 1):
// Current element: 2
// Check for duplicates: No duplicates found.
// Iteration 3 (i = 2):
// Current element: 3
// Check for duplicates: No duplicates found.
// Iteration 4 (i = 3):
// Current element: 4
// Count the occurrences of 4 in the rest of the array: 4 appears at index 6.
// Mark index 6 as visited by setting myArray[6] = -1.
// Print: Duplicate element: 4 (Count: 2)
// Iteration 5 (i = 4):
// Current element: 5
// Check for duplicates: No duplicates found.
// Iteration 6 (i = 5):
// Current element: -1 (marked as visited)
// Iteration 7 (i = 6):
// Current element: -1 (marked as visited)