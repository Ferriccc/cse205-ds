#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void solve(int n, int k, vector<vector<int>> &ans, vector<int> &temp, int index)
    {
        if (temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        if (index > n)
        {
            return;
        }
        temp.push_back(index);
        solve(n, k, ans, temp, index + 1);
        temp.pop_back();
        solve(n, k, ans, temp, index + 1);
    }

    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(n, k, ans, temp, 1);
        return ans;
    }
};
