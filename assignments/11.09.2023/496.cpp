class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> val(1e4 + 1, -1);

        stack<int> st;
        st.push(-1);

        int n = nums2.size();
        for (int i = -1; ++i < n;) {
            while (st.size() > 1 && st.top() < nums2[i]) {
                int v = st.top(); st.pop();
                val[v] = nums2[i];
            }
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (auto &i : nums1) {
            ans.push_back(val[i]);
        }

        return ans;
    }
};
