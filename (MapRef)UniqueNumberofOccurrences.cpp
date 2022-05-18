// LeetCode
// O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> our_map;
        for (int i : arr) {
            if (our_map.find(i) != our_map.end()) {
                our_map[i]++;
            } else {
                our_map[i] = 1;
            }
        }
        set<int> our_set;
        for (auto const& [key, value] : our_map) {
            if (our_set.find(value) != our_set.end()) return false;
            else our_set.insert(value);
        }
        return true;
    }
};
