// LeetCode
// O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 0) return false;
        return ceil(log(n) / log(4)) == floor(log(n) / log(4));
    }
    
    /* Less Runtime but slightly more memory
    bool isPowerOfFour(int n) {
        if (n == 0) return false;
        double val = log(n) / log(4);
        return ceil(val) == floor(val);
    }
    */
    
};
