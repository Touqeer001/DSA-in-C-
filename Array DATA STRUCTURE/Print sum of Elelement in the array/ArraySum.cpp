
// Question: To find the sum of all elements in an array in C++
// given array elements {2, 7, 1, -4, 11}:
// output is 17

// -------------------------Logic------------------------
// step 1 : Define array
//// Calculate the size of the array
// Initialize sum to zero
// Iterate through the array and accumulate the sum
// Iterate through the array and accumulate the sum

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 7, 1, -4, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array elements: " << sum;

    return 0;
}

//--------------------------Step by Step prcess-----------------------------

// Iteration 1 (i=0):
// sum is initially 0.
// myArray[0] is 2.
// Add 2 to sum: sum = 0 + 2 = 2.
// Iteration 2 (i=1):
// sum is now 2.
// myArray[1] is 7.
// Add 7 to sum: sum = 2 + 7 = 9.
// Iteration 3 (i=2):
// sum is now 9.
// myArray[2] is 1.
// Add 1 to sum: sum = 9 + 1 = 10.
// Iteration 4 (i=3):
// sum is now 10.
// myArray[3] is -4.
// Add -4 to sum: sum = 10 - 4 = 6.
// Iteration 5 (i=4):
// sum is now 6.
// myArray[4] is 11.
// Add 11 to sum: sum = 6 + 11 = 17.
//  Final state:
// After the loop, sum is 17, which is the sum of all elements in the array {2, 7, 1, -4, 11}.
// I hope this helps clarify the step-by-step process!