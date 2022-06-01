// LeetCode
// O(rows)

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        int row = 0;
        int left = 0;
        int right = size - 1;
        int sum = 0;
        while (row < size) {
            if (left == right) {
                sum += mat[row][left];
            } else {
                sum += mat[row][left] + mat[row][right];
            }
            left++;
            right--;
            row++;
        }
        return sum;
    }
};
