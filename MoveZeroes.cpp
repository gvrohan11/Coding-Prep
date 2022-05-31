// LeetCode
// O(n)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> to_change;
        int num_zeros = 0;
        for (int i : nums) {
            if (i != 0) to_change.push_back(i);
            else num_zeros++;
        }
        for (int i = 0; i < num_zeros; i++) to_change.push_back(0);
        nums = to_change;
    }
};
