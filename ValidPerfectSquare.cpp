// LeetCode
// O(1)

class Solution {
public:
    bool isPerfectSquare(int num) {
        return ceil(sqrt(num)) == floor(sqrt(num));
    }
};
