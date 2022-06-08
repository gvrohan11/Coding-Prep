// LeetCode
// O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> first = {nums.begin(), nums.begin() + n};
        vector<int> last = {nums.begin() + n, nums.end()};
        vector<int> to_return;
        for (int i = 0; i < n; i++) {
            to_return.push_back(first[i]);
            to_return.push_back(last[i]);
        }
        return to_return;
    }
};
