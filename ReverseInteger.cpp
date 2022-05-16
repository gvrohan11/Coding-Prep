// LeetCode - MEDIUM
// O(n)

class Solution {
public:
    int reverse(int x) {
        if (!is32BitSignedInteger(x)) return 0;
        int num = abs(x);
        long rev_num = 0;
        while (num > 0) {
            if (!is32BitSignedInteger(rev_num * 10)) return 0;
            rev_num = rev_num * 10 + num%10;
            num /= 10;
        }
        if (x < 0) rev_num *= -1;
        return (int) rev_num;
    }
    
    bool is32BitSignedInteger(long num) {
         return (num <= 2147483647) && (num >= -2147483648);
    }
};
