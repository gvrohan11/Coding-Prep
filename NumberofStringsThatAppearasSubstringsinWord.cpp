// LeetCode
// O(n)

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for (std::string s : patterns) {
            if (word.find(s) != std::string::npos) 
                count++;
        }
        return count;
    }
};
