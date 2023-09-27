class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp;
        mp['['] = ']';
        mp['('] = ')';
        mp['{'] = '}';

        stack<char> stk;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            } else {
                if (stk.empty()) {
                    return false;
                }
                if (mp[stk.top()] == s[i]) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        return stk.empty();
    }
};
