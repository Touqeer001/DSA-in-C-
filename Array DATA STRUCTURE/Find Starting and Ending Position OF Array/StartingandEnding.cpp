#include <iostream>
#include <vector>
using namespace std;

vector<int> SearchRange(vector<int> &num, int target)
{
    vector<int> result = {-1, -1};

    // Search for the leftmost occurrence (starting position)
    int left = 0;
    int right = num.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (num[mid] == target)
        {
            result[0] = mid;
            right = mid - 1;
        }
        else if (num[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // Search for the rightmost occurrence (ending position)
    left = 0;               // Reset left
    right = num.size() - 1; // Reset right
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (num[mid] == target)
        {
            result[1] = mid;
            left = mid + 1;
        }
        else if (num[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return result;
}

int main()
{
    vector<int> num = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = SearchRange(num, target);
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

// Explanation:

// Initialization:

// left = 0
// right = 5 (since nums.size() - 1)
// Leftmost Occurrence Search:

// First Iteration:
// mid is at index 2 (nums[mid] = 7).
// Skip the first if condition because 7 is not equal to 8.
// Enter the second else if condition since 7 is less than 8. Update left to mid + 1, so left becomes 3.
// Second Iteration:
// mid is at index 4 (nums[mid] = 8).
// Enter the first if condition because 8 is equal to 8. Update result[0] to mid (which is 4) and adjust right to mid - 1, so right becomes 3.
// Third Iteration:
// mid is at index 3 (nums[mid] = 8).
// Enter the first if condition because 8 is equal to 8. Update result[0] to mid (which is 3) and adjust right to mid - 1, so right becomes 2.
// Fourth Iteration:
// The loop terminates because left > right.
// Rightmost Occurrence Search:

// First Iteration:
// left is reset to 0.
// right is reset to 5.
// mid is at index 2 (nums[mid] = 7).
// Skip the first if condition because 7 is not equal to 8.
// Enter the second else if condition since 7 is less than 8. Update left to mid + 1, so left becomes 3.
// Second Iteration:
// mid is at index 4 (nums[mid] = 8).
// Enter the first if condition because 8 is equal to 8. Update result[1] to mid (which is 4) and adjust left to mid + 1, so left becomes 5.
// Third Iteration:
// mid is at index 5 (nums[mid] = 10).
// Skip the first if condition because 10 is not equal to 8.
// Enter the third else condition and adjust right to mid - 1, so right becomes 4.
// Fourth Iteration:
// The loop terminates because left > right.