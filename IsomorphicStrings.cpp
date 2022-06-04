// LeetCode
// O(n) - n is the length of string s (or string t, they both have the same length)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> first;
        map<char, char> second;
        for (int i = 0; i < s.length(); i++) {
            if (first.find(s.at(i)) == first.end()) {
                first[s.at(i)] = t.at(i);
            } else if (first[s.at(i)] != t.at(i)) return false;
            
            if (second.find(t.at(i)) == second.end()) {
                second[t.at(i)] = s.at(i);
            } else if (second[t.at(i)] != s.at(i)) return false;
        }
        return true;
    }
};
