// LeetCode
// O(n)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        for (string s : operations) {
            if (s == "X++" || s == "++X") val++;
            if (s == "X--" || s == "--X") val--;
        }
        return val;
    }
};
