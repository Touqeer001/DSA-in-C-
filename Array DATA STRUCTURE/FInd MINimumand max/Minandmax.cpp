// ertainly! To find the minimum and maximum elements from an array,
// my_array = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
// output

// min element=1
// max element=9

// To summarize:

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int MinAndMaxElement(int arr[], int size, int &minElement, int &maxElement)
{

    if (size == 0)
    {
        minElement = maxElement = 0;
        return 0;
    }
    minElement = maxElement = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
        else if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
}
int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;

    int result = MinAndMaxElement(arr, size, minVal, maxVal);
    cout << maxVal;

    return 0;
}
// ---------------------------Some Theory--------------
// Passing by Value:

// If you pass variables by value, a copy of the variable is made, and any changes made to the parameter inside the function won't affect the original variable in the calling code.
// Passing by Reference:

// If you pass variables by reference, you're passing the actual memory address of the variable. This means any modifications to the parameter inside the function will directly affect the original variable in the calling code.

// minElement and maxElement are passed by reference (int &), indicating that the function can directly modify the values of minElement and maxElement in the calling code.

// Without the &, the function would work with copies of minElement and maxElement, and any changes made inside the function would not affect the original variables in the calling code.

// So, using & allows the findMinMax function to update the minimum and maximum values directly in the calling code, making the function more effective in finding and returning those values.

// ------------------------Output of Abve code and expalanation---------
// Certainly !Let's go through the loop iterations step by step with the given array {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}:

// Initial state:

// minElement is initialized to 3 (the first element).
// maxElement is initialized to 3 (the first element).
// i is initialized to 1 (starting from the second element).
// Iteration 1 (i=1):

// arr[1] is 1 (second element).
// Since 1 < minElement is true, update minElement to 1.
// The condition 1 > maxElement is false, so no change to maxElement.
// Increment i to 2.
// Iteration 2 (i=2):

// arr[2] is 4.
// The condition 4 < minElement is false.
// The condition 4 > maxElement is true, so update maxElement to 4.
// Increment i to 3.
// Iteration 3 (i=3):

// arr[3] is 1.
// The condition 1 < minElement is true, update minElement to 1.
// The condition 1 > maxElement is false.
// Increment i to 4.
// Iteration 4 (i=4):

// arr[4] is 5.
// The condition 5 < minElement is false.
// The condition 5 > maxElement is true, so update maxElement to 5.
// Increment i to 5.
// Iteration 5 (i=5):

// arr[5] is 9.
// The condition 9 < minElement is false.
// The condition 9 > maxElement is true, so update maxElement to 9.
// Increment i to 6.
// Iteration 6 (i=6):

// arr[6] is 2.
// The condition 2 < minElement is true, update minElement to 2.
// The condition 2 > maxElement is false.
// Increment i to 7.
// Iteration 7 (i=7):

// arr[7] is 6.
// The condition 6 < minElement is false.
// The condition 6 > maxElement is false.
// Increment i to 8.
// Iteration 8 (i=8):

// arr[8] is 5.
// The condition 5 < minElement is false.
// The condition 5 > maxElement is false.
// Increment i to 9.
// Iteration 9 (i=9):

// arr[9] is 3.
// The condition 3 < minElement is false.
// The condition 3 > maxElement is false.
// Increment i to 10.
// Iteration 10 (i=10):

// arr[10] is 5.
// The condition 5 < minElement is false.
// The condition 5 > maxElement is false.
// Increment i to 11.
// Iteration 11 (i=11):

// End of the loop since i is no longer less than size.
// After these iterations, minElement will be 1 and maxElement will be 9, which are the minimum and maximum values in the given array.