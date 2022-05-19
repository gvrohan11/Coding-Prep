// LeetCode
// O(n)

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> our_map;
        for (int i : arr) {
            if (our_map.find(i) != our_map.end())
                our_map[i]++;
            else
                our_map[i] = 1;
        }
        vector<int> vect;
        for (auto const& [key, value] : our_map) {
            if (key == value) vect.push_back(key);
        }
        if (vect.size() > 0) return vect.at(vect.size() - 1);
        return -1;
    }
};
