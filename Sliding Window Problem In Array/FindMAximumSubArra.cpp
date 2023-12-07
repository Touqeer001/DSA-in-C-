// To find the maximum subarray of size k in a given array,
// nums = {1, 3, -1, -3, 5, 3, 6, 7} and k = 3, the output would be:

// output:Maximum subarray sum of size 3: 16
// Corresponding subarray: 5 3 6

#include <iostream>
using namespace std;
#include <vector>

pair<int, std::vector<int>> maxSubarrayofSize(vector<int> &num, int k)
{
    int currentSum = 0;
    int maxsum = 0;
    vector<int> currentSubaaray;

    for (int i = 0; i < k; i++)
    {
        currentSum = currentSum + num[i];
        currentSubaaray.push_back(num[i]);
    }
    maxsum = currentSum;

    for (int i = k; i < num.size(); i++)
    {
        currentSum = currentSum - currentSubaaray[0] + num[i];
        currentSubaaray.erase(currentSubaaray.begin());
        currentSubaaray.push_back(num[i]);

        if (currentSum > maxsum)
        {
            maxsum = currentSum;
        }
    }
    return make_pair(maxsum, currentSubaaray);
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4};
    int k = 3;

    auto result = maxSubarrayofSize(nums, 3);

    std::cout << "Maximum subarray sum of size " << result.first << std::endl;
    std::cout << "Corresponding subarray: ";
    for (int num : result.second)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}