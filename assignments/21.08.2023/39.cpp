#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(int idx, vector<int> &v, vector<int> &output, vector<vector<int>> &ans, int target)
    {
        if (target == 0)
        {
            ans.push_back(output);
            return;
        }
        if (target < 0)
            return;
        if (idx >= v.size())
            return;
        if (v[idx] <= target)
        {
            output.push_back(v[idx]);
            solve(idx, v, output, ans, target - v[idx]);
            output.pop_back();
        }
        solve(idx + 1, v, output, ans, target);
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> output;
        vector<vector<int>> ans;
        solve(0, candidates, output, ans, target);
        return ans;
    }
};
