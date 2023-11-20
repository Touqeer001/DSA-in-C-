// Question:
//  To swap alternate elements in an array (e.g., {1, 2, 7, 8, 5}), you can use various approaches. Here are two common methods:
// ARRAY= {1, 2, 7, 8, 5})
// OUTPUT:{2 1 8 7 5 }

// Approach 1: Using a Temporary Variable

// /WHY WE USE i=I+2 IN ARRAY
// ANSWER:When swapping alternate elements in an array, the loop is designed to process pairs of elements at a time. Using i += 2 instead of i++ ensures that you only swap elements at even indices (i) with the elements at the next odd indices (i + 1). This way, you are pairing up elements and swapping them in pairs.

// Here's the breakdown:

// i = 0: Swap element at index 0 with the element at index 1.
// i = 2: Swap element at index 2 with the element at index 3.
// i = 4: Swap element at index 4 with the element at index 5.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, -3, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        // swap
        arr[i + 1] = temp; // after swap{1,2,7,8,5};
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// -----------------------------sTEP BY sTEP PROCESS OF ABOVE----------------
// Initial array: {1, 2, 7, 8, 5}
// Step 1 (i = 0):
// i = 0: Swap myArray[0] (1) with myArray[1] (2).
// After swap: {2, 1, 7, 8, 5}
// Step 2 (i = 2):
// i = 2: Swap myArray[2] (7) with myArray[3] (8).
// After swap: {2, 1, 8, 7, 5}
// Step 3 (i = 4):
// i = 4: The loop condition i < arraySize - 1 is no longer satisfied, so the loop terminates.
// Final array: {2, 1, 8, 7, 5}
// In each iteration of the loop, two elements are swapped: the element at index i with the element at index i + 1. The loop starts from i = 0 and proceeds in steps of 2 (i += 2) until i becomes equal to or exceeds arraySize - 1. The loop ensures that only pairs of elements are swapped, avoiding out-of-bounds access.