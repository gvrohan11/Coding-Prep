// LeetCode
// O(n)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (int i = 0; i < letters.size(); i++) {
            if (letters.at(i) > target) return letters.at(i);
        }
        return letters.at(0);
    }
};
