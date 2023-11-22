// Question:The union of two sorted arrays

// Array 1: 1 2 4 5 6
// Array 2: 2 3 5 7
// Union of the arrays: 1 2 3 4 5 6 7

// Approach:
// Initialize two pointers, one for each array (let's call them i and j).
// Compare the elements at the current pointers (arr1[i] and arr2[j]).
// If they are equal, add one of them to the result and move both pointers.
// If one element is smaller, add it to the result and move its pointer.
// If the other element is smaller, add it to the result and move its pointer.
// Continue this process until you reach the end of either array.
// If there are remaining elements in either array, add them to the result.

// Time Complexity: O(m + n), where m and n are the sizes of the two arrays. The algorithm processes each element once.
// Space Complexity: O(m + n) for the resulting vector, which stores the union of the two arrays.

#include <iostream>
using namespace std;
#include <vector>

vector<int> findunion(int arr1[], int size1, int arr2[], int size2)
{
    vector<int> result;
    int i = 0, j = 0;

    while (i < size1 && j < size2)
    {
        // add equle element in the result
        if (arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
        }
        else
        {
            // add the smaller to the result
            result.push_back(arr2[j]);
            j++;
        }
    }
    while (i < size1)
    {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < size2)
    {
        result.push_back(arr2[j]);
        j++;
    }
    return result;
}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    std::vector<int> result = findunion(arr1, size1, arr2, size2);

    std::cout << "Union of the arrays: ";
    for (int element : result)
    {
        std::cout << element << " ";
    }

    return 0;
}

// Initial State:

// i is at index 0 of Array 1 (arr1[0] = 1).
// j is at index 0 of Array 2 (arr2[0] = 2).
// Comparison and Addition:

// Since arr1[i] is smaller than arr2[j], we add arr1[i] to the result (result = [1]), and we increment i.
// Next Comparison and Addition:

// Now, arr1[i] is equal to arr2[j] (both are 2). We add one of them to the result (result = [1, 2]), and we increment both i and j.
// Next Comparison and Addition:

// arr1[i] is smaller than arr2[j]. We add arr1[i] to the result (result = [1, 2, 4]), and we increment i.
// Next Comparison and Addition:

// arr1[i] is smaller than arr2[j]. We add arr1[i] to the result (result = [1, 2, 4, 5]), and we increment i.
// Next Comparison:

// Now, arr1[i] (6) is not smaller than arr2[j] (7), so we add arr2[j] to the result (result = [1, 2, 4, 5, 7]), and we increment j.
// Remaining Elements:

// Since we have reached the end of either array, we add the remaining elements of both arrays to the result (result = [1, 2, 4, 5, 7, 6]).
// So, the final union of the two arrays is [1, 2, 4, 5, 7, 6]. I hope this example clarifies the process for you.