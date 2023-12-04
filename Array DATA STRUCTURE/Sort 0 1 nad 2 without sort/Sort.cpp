// {0, 2, 2, 1, 1, 0}

#include <iostream>
#include <vector>
using namespace std;
int SortColor(vector<int> &num)

{
    int low = 0;
    int mid = 0;
    int high = num.size() - 1; // 6-1=5
    while (mid <= high)
    { // 0<=5 true

        if (num[mid] == 0)
        { // num[0]=2
            swap(num[low], num[mid]);
            low++;
            mid++;
        }
        else if (num[mid] == 1)
        {
            mid++;
        }
        else if (num[mid] == 2)
        {
            swap(num[mid], num[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> num = {0, 0, 1, 1, 1, 2};
    SortColor(num);

    // Print the sorted array
    std::cout << "Sorted Array: [";
    for (int i = 0; i < num.size(); ++i)
    {
        std::cout << num[i];
        if (i < num.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

// Initialization:

// low = 0
// mid = 0
// high = 5 (since nums.size() - 1)
// First Iteration:

// mid is at index 0 (nums[mid] = 2).
// Skip the first if condition.
// Skip the second else if condition.
// Enter the third else if condition and swap nums[0] with nums[5]: nums = {0, 0, 2, 1, 1, 2}, decrement high to 4.
// Second Iteration:

// mid is at index 0 (nums[mid] = 0).
// Enter the first if condition and swap nums[0] with nums[0] and increment both low and mid: nums = {0, 0, 2, 1, 1, 2}, increment low to 1 and mid to 1.
// Third Iteration:

// mid is at index 1 (nums[mid] = 0).
// Enter the first if condition and swap nums[1] with nums[1] and increment both low and mid: nums = {0, 0, 2, 1, 1, 2}, increment low to 2 and mid to 2.
// Fourth Iteration:

// mid is at index 2 (nums[mid] = 2).
// Enter the third else if condition and swap nums[2] with nums[4]: nums = {0, 0, 1, 1, 2, 2}, decrement high to 3.
// Fifth Iteration:

// mid is at index 2 (nums[mid] = 1).
// Skip the first if condition.
// Enter the second else if condition and increment mid to 3.
// Sixth Iteration:

// mid is at index 3 (nums[mid] = 1).
// Skip the first if condition.
// Enter the second else if condition and increment mid to 4.
// Seventh Iteration:

// mid is at index 4 (nums[mid] = 2).
// Enter the third else if condition and swap nums[4] with nums[3]: nums = {0, 0, 1, 1, 2, 2}, decrement high to 2.
// Eighth Iteration:

// mid is at index 4 (nums[mid] = 2).
// Enter the third else if condition and swap nums[4] with nums[2]: nums = {0, 0, 1, 1, 2, 2}, decrement high to 1.
// Ninth Iteration:

// mid is at index 4 (nums[mid] = 2).
// Enter the third else if condition and swap nums[4] with nums[1]: `nums = {0, 0,