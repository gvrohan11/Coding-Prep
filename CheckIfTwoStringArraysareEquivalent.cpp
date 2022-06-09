// LeetCode
// O(n + m)

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one = "";
        for (string s : word1) one += s;
        string two = "";
        for (string s : word2) two += s;
        return one == two;
    }
};
