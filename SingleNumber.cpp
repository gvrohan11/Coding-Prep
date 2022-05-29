// LeetCode
// O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> our_map;
        for (int i : nums) {
            if (our_map.find(i) != our_map.end()) {
                our_map[i]++;
            } else {
                our_map[i] = 1;
            }
        }
        int sol = nums.at(0);
        for (auto const& [key, value] : our_map) {
            if (value == 1) {
                sol = key;
                break;
            }
        }
        return sol;
    }
};
