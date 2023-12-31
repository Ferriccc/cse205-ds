#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(int idx, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (idx >= nums.size())
            ans.push_back(nums);
        for (int i = idx; i < nums.size(); i++)
        {
            swap(nums[i], nums[idx]);
            solve(idx + 1, nums, ans);
            swap(nums[i], nums[idx]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        solve(0, nums, ans);
        return ans;
    }
};
