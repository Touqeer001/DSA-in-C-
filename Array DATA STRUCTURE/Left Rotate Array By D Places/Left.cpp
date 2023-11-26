

#include <iostream>
#include <algorithm>
using namespace std;

void reverFunction(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void leftShiftByD(int arr[], int size, int d)
{
    d = d % size;

    //  reverseArray(arr, 0, d - 1); reverses the elements from index 0 to index d - 1.
    // In our case, d is 2, so we reverse elements from index 0 to 1.
    // After this step, the array becomes: [2, 1, 3, 4, 5]
    reverFunction(arr, 0, d - 1);

    // Reverse the remaining elements:
    // reverseArray(arr, d, size - 1); reverses the elements from index d to the last index (size - 1).
    // In our case, we reverse elements from index 2 to 4.
    // After this step, the array becomes: [2, 1, 5, 4, 3]
    reverFunction(arr, d, size - 1);

    // Reverse the entire array:

    // reverseArray(arr, 0, size - 1); reverses the entire array.
    // After this step, the array becomes: [3, 4, 5, 1, 2]
    // Putting it all together, the left rotated array by 2 places is [3, 4, 5, 1, 2].
    reverFunction(arr, 0, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 10;

    std::cout << "Original Array: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    leftShiftByD(arr, size, d);

    std::cout << "\nArray after Left Rotation by " << d << " places: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}