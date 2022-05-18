// LeetCode
// O(n): n is the number of digits

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while (n > 0) {
            int val = n % 10;
            product *= val;
            sum += val;
            n /= 10;
        }
        return product - sum;
    }
};
