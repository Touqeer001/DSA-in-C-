// Question;
// find the maximum number of consecutive ones in an array
// nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};
// The maximum number of consecutive ones is: 4
// -----------------------------TIme and Space Complaxity-----------------------
// The time complexity of the provided solution is O(n)
// The space complexity is O(1)

#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(const std::vector<int> &nums)
{
    int maxi = 0;
    int count = 0;

    for (int num : nums)
    {
        if (num == 1)
        {
            // Increment the count of consecutive ones
            count++;
        }
        else
        {
            // Reset the count if the current number is not 1
            maxi = std::max(maxi, count);
            count = 0;
        }
    }

    // Check one more time after the loop in case the array ends with consecutive ones
    maxi = std::max(maxi, count);
    return maxi;
}

int main()
{
    // Example usage
    std::vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);

    std::cout << "The maximum number of consecutive ones is: " << maxConsecutiveOnes << std::endl;

    return 0;
}
