#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(int idx, vector<int> &v, vector<int> &output, vector<vector<int>> &ans, int target, int size)
    {
        if (target == 0 && output.size() == size)
        {
            ans.push_back(output);
            return;
        }
        if (idx == v.size())
        {
            return;
        }
        if (v[idx] <= target)
        {
            output.push_back(v[idx]);
            solve(idx + 1, v, output, ans, target - v[idx], size);
            output.pop_back();
        }
        solve(idx + 1, v, output, ans, target, size);
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> output;
        vector<vector<int>> ans;
        solve(0, v, output, ans, n, k);
        return ans;
    }
};
