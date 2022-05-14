// LeetCode
// O(n) - I think

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums.at(0);
        int min = nums.at(0);
        for (int i : nums) {
            if (i > max) max = i;
            else if (i < min) min = i;
        }
        return gcd(max, min);
    }
    
    int gcd(int a, int b) {
       if (b == 0) return a;
       return gcd(b, a % b);
    }
};
