// LeetCode
// O(n * m)

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // some of the chars in stones are actually jewels
        int count = 0;
        for (char s : stones) {
            for (char j : jewels) {
                if (j == s) count++;
            }
        }
        return count;
    }
};
