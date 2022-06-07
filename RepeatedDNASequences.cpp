// LeetCode
// O(n - 9) -> O(n) (we don't check the last 9 characters)

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> to_return;
        if (s.length() <= 10) return to_return;
        vector<string> vect;
        map<string, int> our_map;
        for (int i = 0; i < s.length() - 9; i++) {
            string str = s.substr(i, 10);
            if (our_map.find(str) == our_map.end()) {
                our_map[str] = 1;
            } else if (our_map[str] == 1) {
                vect.push_back(str);
                our_map[str]++;
            }
        }
        return vect;
    }
};
