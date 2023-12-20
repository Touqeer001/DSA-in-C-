// Enter the size of the array: 3
// Enter the sorted array elements (each element twice except one): 1 3 3
// The unique element is: 1



#include <iostream>
using namespace std;
#include <vector>

int singleNonDuplicate(const std::vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Check if mid is a unique element by comparing adjacent elements
        if (nums[mid] == nums[mid ^ 1])
        {
            // The unique element is on the right side
            left = mid + 1;
        }
        else
        {
            // The unique element is on the left side
            right = mid;
        }
    }

    // At the end, left and right will point to the unique element
    return nums[left];
}
int main()
{
    // Take input from the user
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;

    std::cout << "Enter the sorted array elements (each element twice except one): ";
    std::vector<int> nums(size);
    for (int i = 0; i < size; ++i)
    {
        std::cin >> nums[i];
    }

    // Find and print the unique element
    int result = singleNonDuplicate(nums);
    std::cout << "The unique element is: " << result << std::endl;

    return 0;
}