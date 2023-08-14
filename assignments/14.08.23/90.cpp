class Solution {
public:
    set<vector<int>> solve(vector<int>& nums, int i, int j) {
        if (i == j) {
            set<vector<int>> ans;
            vector<int> a1, a2 = { nums[i] };
            ans.insert(a1);
            ans.insert(a2);
            return ans;
        }
        set<vector<int>> ans = solve(nums, i + 1, j);
        set<vector<int>> ret = ans;
        for (auto &v : ans) {
            vector<int> x = v;
            x.push_back(nums[i]);
            sort(x.begin(), x.end());
            ret.insert(x);
        }
        return ret;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        auto x = solve(nums, 0, (nums.size() - 1));
        vector<vector<int>> ans_final;
        for (auto &v : x)
            ans_final.push_back(v);
        return ans_final;
    }
};
