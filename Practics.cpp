#include <iostream>
#include <vector>

int pairOfSum(const std::vector<int> &arr, int target, int &first, int &second)
{
    for (int start = 0, end = arr.size() - 1; start < end;)
    {
        int currentSum = arr[start] + arr[end];
        if (currentSum == target)
        {
            first = arr[start];
            second = arr[end];
            return 1; // Found a pair, return 1
        }
        else if (currentSum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    // No pair found
    return 0;
}

int main()
{
    std::vector<int> arr = {1, 3, 4, 7, 8, 9};
    int targetSum = 11;

    int first = -1, second = -1; // Initialize to -1

    if (pairOfSum(arr, targetSum, first, second))
    {
        std::cout << "Pair with the sum " << targetSum << ": {" << first << ", " << second << "}" << std::endl;
    }
    else
    {
        std::cout << "No pair found with the sum " << targetSum << std::endl;
    }

    return 0;
}