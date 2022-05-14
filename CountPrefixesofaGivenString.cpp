// LeetCode
// O(n)

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        for (std::string word : words) {
            if (s.find(word) != std::string::npos && s.find(word) == 0) 
                count++;
        }
        return count;
    }
};
