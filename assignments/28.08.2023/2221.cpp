#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int k = nums.size() - 1;
        for (int j = 0; j < nums.size() - 1; j++)
        {
            for (int i = 0; i < k; i++)
            {
                nums[i] = nums[i] + nums[i + 1];
                nums[i] %= 10;
            }
            --k;
        }
        return nums[0];
    }
};