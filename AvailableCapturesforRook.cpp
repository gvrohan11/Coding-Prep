// LeetCode
// O(rows * columns) -> O(64) -> O(1)

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        vector<int> position = findPosition(board);
        int x = position.at(0);
        int y = position.at(1);
        int count = 0;
        
        for (int r = x - 1; r >= 0; r--) {
            if (board.at(r).at(y) == 'B') break;
            if (board.at(r).at(y) == 'p') {
                count++;
                break;
            }
        }
        
        for (int r = x + 1; r < 8; r++) {
            if (board.at(r).at(y) == 'B') break;
            if (board.at(r).at(y) == 'p') {
                count++;
                break;
            }
        }
        
        for (int c = y - 1; c >= 0; c--) {
            if (board.at(x).at(c) == 'B') break;
            if (board.at(x).at(c) == 'p') {
                count++;
                break;
            }
        }
        
        for (int c = y + 1; c < 8; c++) {
            if (board.at(x).at(c) == 'B') break;
            if (board.at(x).at(c) == 'p') {
                count++;
                break;
            }
        }
        
        return count;
    }
    
    vector<int> findPosition(vector<vector<char>>& board) {
        vector<int> to_return;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board.at(i).at(j) == 'R') to_return = {i, j};
            }
        }
        return to_return;
    }
};
