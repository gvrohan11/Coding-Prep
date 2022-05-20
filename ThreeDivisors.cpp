// LeetCode
// O(n)

class Solution {
    public boolean isThree(int n) {
        int num = 1;
        int count = 0;
        while (n >= num) {
            if (n % num == 0) count++;
            num++;
        }
        if (count == 3) return true;
        return false;
    }
}
