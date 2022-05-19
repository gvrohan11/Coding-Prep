// LeetCode
// O(r * c): r = rows; c = columns

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (vector<int> vect : grid) {
            for (int i : vect) {
                if (i < 0) count++;
            }
        }
        return count;
    }
};
