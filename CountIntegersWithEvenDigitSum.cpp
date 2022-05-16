// LeetCode
// O(n^2)

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (i < 10 && i % 2 == 0) count++;
            else {
                int sum = 0;
                int number = i;
                while (number != 0) {
                    sum += number % 10;
                    number /= 10;
                }
                if (sum % 2 == 0) count++;
            }
        }
        return count;
    }
};
