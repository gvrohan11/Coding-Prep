// LeetCode
// O(n * m): n is the number of ints in nums; m is the number of digit in each number

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count;
        for (int i : nums) {
            std::cout << i << " ";
            int digit_count = 0;
            int num = i;
            while (num > 0) {
                std::cout << num << " ";
                num /= 10;
                digit_count++;
            }
            if (digit_count % 2 == 0) count++;
            std::cout << " " << std::endl;
        }
        return count;
    }
};
