// Given an array of integers nums which is sorted in ascending order, and an
// integer target, write a function to search target in nums. If target exists, then
// return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
//  Output: 4

#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &num, int target)
{
    int left = 0;
    int right = num.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (num[mid] == target)
        {
            return mid; // target Found
        }
        else if (num[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1; // Adjust the search space to the right half
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 4, 5, 3, 6, 7};
    int target = 10;
    int result = binarySearch(nums, target);
    cout << result;

    return 0;
}


// Initial State:

// left = 0
// right = 5 (because nums.size() - 1)
// First Iteration:

// Calculate mid: mid = 0 + (5 - 0) / 2 = 2
// Compare nums[mid] with the target:
// nums[2] = 3 is less than the target (9).
// Update left = mid + 1: left = 2 + 1 = 3
// Second Iteration:

// Calculate mid: mid = 3 + (5 - 3) / 2 = 4
// Compare nums[mid] with the target:
// nums[4] = 9 is equal to the target (9).
// Return mid (4): Target found at index 4.
// The binary search successfully found the target value 9 at index 4 in the sorted array. The algorithm efficiently narrows down the search space by adjusting the left and right pointers based on the comparison of the middle element with the target value. This approach ensures O(log n) runtime complexity for sorted arrays.