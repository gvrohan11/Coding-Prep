// LeetCode
// O(2n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> to_ret;
        for (int i : nums) to_ret.push_back(i);
        for (int i : nums) to_ret.push_back(i);
        return to_ret;
    }
};
