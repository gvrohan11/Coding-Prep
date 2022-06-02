// LeetCode
// O(n)

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        // Capitals - 65-90
        
        int num_capitals = 0;
        for (char c : word)
            if (int(c) >= 65 && int(c) <= 90) num_capitals++;
        
        if (num_capitals == 0) return true;
        if (num_capitals == 1 && int(word.at(0)) >= 65 && int(word.at(0)) <= 90) return true;
        if (num_capitals == word.length()) return true;
        return false;
    }
};
