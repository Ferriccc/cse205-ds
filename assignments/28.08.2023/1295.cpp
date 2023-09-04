#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int cnt = 0;
        for (auto i : nums)
        {
            cnt += !((int)floor(log10(i) + 1) % 2);
        }
        return cnt;
    }
};