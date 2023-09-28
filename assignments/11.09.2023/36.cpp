class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        for (int row = 0; row < 9; row++) {
            unordered_set<char> rowc;
            for (int col = 0; col < 9; col++) {
                if (board[row][col] != '.' && rowc.find(board[row][col]) != rowc.end()) {
                    return false;
                }
                rowc.insert(board[row][col]);
            }
        }

        for (int col = 0; col < 9; col++) {
            unordered_set<char> colc;
            for (int row = 0; row < 9; row++) {
                if (board[row][col] != '.' && colc.find(board[row][col]) != colc.end()) {
                    return false;
                }
                colc.insert(board[row][col]);
            }
        }

        vector<unordered_set<char>> sbc(9);
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                int loc = (row / 3) * 3 + col / 3;
                if (board[row][col] != '.' && sbc[loc].find(board[row][col]) != sbc[loc].end()) {
                    return false;
                }
                sbc[loc].insert(board[row][col]);
            }
        }
        return true;
    }
};
