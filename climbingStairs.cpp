// Leet Code
// Fibinacci Sequence in disguise
// O(n)

class Solution {
    public int climbStairs(int n) {
        // 1,2,3,5,8,13,21...
        if (n == 1) return 1;
        if (n == 2) return 2;
        int first = 1;
        int second = 2;
        int nextTerm = 0;
        for (int i = 3; i <= n; i++) {
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        return nextTerm;
    }
}
