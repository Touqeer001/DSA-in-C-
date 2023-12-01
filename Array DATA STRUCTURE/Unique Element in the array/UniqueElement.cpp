// Question:finding the unique element in an array
// input:arr[] = {2, 3, 1, 6, 3, 6, 2};
// outPut:  1

// Approch:Using Xor Operator

// Time Complexity: O(n) where n is the size of the array.
// Space Complexity: O(1) or constan

// Space Complexity:
// The space complexity is O(1) or constant. The only additional space used is for the loop variable i and the uniqueElement variable. These variables require constant space, regardless of the size of the input array. The algorithm does not use any data structures that grow with the input size, so the space complexity is constant.

#include <iostream>
using namespace std;

int UniqueElement(int arr[], int size)
{
    int uniqueElements = 0;
    for (int i = 0; i < size; i++)
    {
        uniqueElements = uniqueElements ^ arr[i];
    }
    return uniqueElements;
}
int main()
{
    int arr[] = {2, 3, 100, 6, 3, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = UniqueElement(arr, size);
    cout << result;

    return 0;
}

// -----------------Above code expalanation----------------------
//Initial values:
// uniqueElement: 0 (initial value)
// arr: {2, 3, 1, 6, 3, 6, 2}
// Step 1 (i = 0):
// uniqueElement ^= arr[0]: 0 XOR 2 = 2
// After the first iteration: uniqueElement = 2
// Step 2 (i = 1):
// uniqueElement ^= arr[1]: 2 XOR 3 = 1
// After the second iteration: uniqueElement = 1
// Step 3 (i = 2):
// uniqueElement ^= arr[2]: 1 XOR 1 = 0
// After the third iteration: uniqueElement = 0
// Step 4 (i = 3):
// uniqueElement ^= arr[3]: 0 XOR 6 = 6
// After the fourth iteration: uniqueElement = 6
// Step 5 (i = 4):
// uniqueElement ^= arr[4]: 6 XOR 3 = 5
// After the fifth iteration: uniqueElement = 5
// Step 6 (i = 5):
// uniqueElement ^= arr[5]: 5 XOR 6 = 3
// After the sixth iteration: uniqueElement = 3
// Step 7 (i = 6):
// uniqueElement ^= arr[6]: 3 XOR 2 = 1
// After the seventh iteration: uniqueElement = 1
// Final value of uniqueElement: 1
// After iterating through the entire array and performing XOR with each element, the final value of uniqueElement is 1. The XOR operation effectively cancels out pairs of identical elements, leaving only the unique element in the array.
