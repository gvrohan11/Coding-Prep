// LeetCode
// O(n)

class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == 1) {
                i++;
                int upper = i + k;
                while (i < nums.size() && i < upper) {
                    if (nums[i] == 1) return false;
                    i++;
                }
            } else {
                i++;
            }
        }
        return true;
    }
};
