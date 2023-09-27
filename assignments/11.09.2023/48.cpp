class Solution {
public:
    void rotate(vector<vector<int>> &matrix) {
        set<pair<int, int>> vis;
        int n = matrix.size();
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (vis.find({i, j}) == vis.end()) {
                    swap(matrix[i][j], matrix[j][n - i - 1]);
                    vis.insert({j, n - i - 1});
                }
            }
        }
    }
};
