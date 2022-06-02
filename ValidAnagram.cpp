// LeetCode
// O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<int, int> s_map;
        for (char c : s) {
            int i = int(c);
            if (s_map.find(i) != s_map.end()) {
                s_map[i]++;
            } else {
                s_map[i] = 1;
            }
        }
        map<int, int> t_map;
        for (char c : t) {
            int i = int(c);
            if (t_map.find(i) != t_map.end()) {
                t_map[i]++;
            } else {
                t_map[i] = 1;
            }
        }
        for (auto const& [key, value] : s_map) {
            if (value != t_map[key]) return false;
        }
        return true;
    }
};
