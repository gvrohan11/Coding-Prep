// LeetCode
// O(n^2)

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) < nums.at(j) && nums.at(j) - nums.at(i) > max_diff)
                    max_diff = nums.at(j) - nums.at(i);
            }
        }
        return max_diff;
    }
};
