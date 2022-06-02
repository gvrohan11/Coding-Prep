// LeetCode
// O(rows * columns)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (vector<int> vect : matrix) {
            for (int i : vect) {
                if (i == target) return true;
            }
        }
        return false;
    }
};
