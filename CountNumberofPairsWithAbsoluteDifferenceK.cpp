// LeetCode
// O(n^2)

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        if (nums.size() <= 1) return 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i != j && abs(nums.at(i) - nums.at(j)) == k) count++;
            }
        }
        return count;
    }
};
