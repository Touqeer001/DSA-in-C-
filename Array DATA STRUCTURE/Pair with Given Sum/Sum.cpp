

#include <iostream>
using namespace std;
#include <vector>

void findPairWithSum(vector<int> &arr, int target, int &first, int &last)
{

    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target)
        {
            first = arr[left];
            last = arr[right];
            return;
        }
        else if (currentSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    // No pair found with the given sum, set both values to -1
    first = -1;
    last = -1;
}

// In this example, the array is {1, 3, 4, 7, 8, 9} and the target sum is 11. Let's go through the while loop step by step:

// Initial state: left = 0, right = 5.
// Calculate the sum: currentSum = arr[0] + arr[5] = 1 + 9 = 10 (less than the target sum).
// Since currentSum is less than the target sum, move the left pointer to increase the sum: left = 1.
// Calculate the sum again: currentSum = arr[1] + arr[5] = 3 + 9 = 12 (greater than the target sum).
// Since currentSum is greater than the target sum, move the right pointer to decrease the sum: right = 4.
// Calculate the sum again: currentSum = arr[1] + arr[4] = 3 + 8 = 11 (equal to the target sum).
// Found a pair with the given sum, so the function returns true.

int main()
{
    // Example usage
    std::vector<int> arr = {1, 3, 4, 7, 8, 9};
    int targetSum = 7;

    int first, second;
    findPairWithSum(arr, targetSum, first, second);

    if (first != -1 && second != -1)
    {
        std::cout << "Pair with the sum " << targetSum << ": {" << first << ", " << second << "}" << std::endl;
    }
    else
    {
        std::cout << "No pair found with the sum " << targetSum << std::endl;
    }

    return 0;
}