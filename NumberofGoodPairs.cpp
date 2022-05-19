// LeetCode
// O(n^2)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // if (nums.size() == 1) return 0;
        // if (nums.size() == 2) {
        //     if (nums.at(0) == nums.at(1)) return 1;
        //     return 0;
        // }
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (i < j && nums.at(i) == nums.at(j)) count++;
            }
        }
        return count;
    }
};
