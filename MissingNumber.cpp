// LeetCode
// O(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> ints;
        for (int i : nums) ints.insert(i);
        for (int i = 0; i < nums.size(); i++) {
            if (ints.find(i) == ints.end()) return i;
        }
        return nums.size();
    }
};
