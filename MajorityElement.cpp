// LeetCode
// O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold = (int) floor(nums.size() / 2);
        map<int, int> our_map;
        for (int i : nums) {
            if (our_map.find(i) != our_map.end()) {
                our_map[i]++;
            } else {
                our_map[i] = 1;
            }
        }
        int to_return = 0;
        for (auto const& [key, value] : our_map) {
            if (value > threshold) {
                to_return = key;
                break;
            }
        }
        return to_return;
    }
};
