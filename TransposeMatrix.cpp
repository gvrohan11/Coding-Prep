// LeetCode
// O(rows * columns)

class Solution {
    public int[][] transpose(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] to_return = new int[cols][rows];
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                to_return[c][r] = matrix[r][c];
            }
        }
        return to_return;
    }
}
