// LeetCode
// O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> our_map;
        for (int i : nums) {
            if (our_map.find(i) != our_map.end()) {
                return true;
            } else {
                our_map[i] = 1;
            }
        }
        return false;
    }
};
