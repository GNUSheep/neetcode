
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, set<int>> row_set = {};
        map<pair<int, int>, set<int>> squares = {};

        for(int row = 0; row < board.size(); row++) {
            set<int> col_set = {};
            for(int col = 0; col < board[0].size(); col++) {
                if (board[row][col] == '.') {
                    continue;
                }

                if (col_set.find(board[row][col]) != col_set.end() || 
                    row_set[col].find(board[row][col]) != row_set[col].end() ||
                    squares[{row / 3, col / 3}].find(board[row][col]) != squares[{row / 3, col /3}].end() ) {
                        return (false);
                    }

                squares[{row / 3, col / 3}].insert(board[row][col]);
                row_set[col].insert(board[row][col]);
                col_set.insert(board[row][col]);
            }
        }

        return (true);
    }
};
