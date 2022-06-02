// LeetCode
// O(n)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // red-0; white-1; blue-2
        vector<int> other;
        map<int, int> our_map;
        for (int i : nums) {
            if (our_map.find(i) != our_map.end()) {
                our_map[i]++;
            } else {
                our_map[i] = 1;
            }
        }
        for (int i = 0; i < our_map[0]; i++) other.push_back(0);
        for (int i = 0; i < our_map[1]; i++) other.push_back(1);
        for (int i = 0; i < our_map[2]; i++) other.push_back(2);
        nums = other;
    }
};
