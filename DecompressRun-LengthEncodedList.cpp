// LeetCode
// O((n / 2) * m) -> O(n * m): n is the length of the list, m represents the value at each even numbered digit

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> to_return;
        for (int i = 0; i < nums.size(); i += 2)
            for (int j = 0; j < nums.at(i); j++) to_return.push_back(nums.at(i + 1));
        return to_return;
    }
};
