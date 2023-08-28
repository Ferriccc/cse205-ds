#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void solve(int idx, vector<int> &v, vector<int> &output, vector<vector<int>> &ans, int target)
    {
        if (target == 0)
        {
            ans.push_back(output);
        }
        for (int i = idx; i < v.size(); i++)
        {
            if (idx != i && v[i] == v[i - 1])
                continue;
            if (v[i] <= target)
            {
                output.push_back(v[i]);
                solve(i + 1, v, output, ans, target - v[i]);
                output.pop_back();
            }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<int> output;
        vector<vector<int>> ans;
        solve(0, candidates, output, ans, target);
        return ans;
    }
};
