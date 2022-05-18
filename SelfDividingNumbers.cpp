// LeetCode
// O(n * m): n is the number of numbers in [left,right]; m is the number of digits in each number

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> to_return;
        for (int i = left; i <= right; i++) {
            if (ContainsZero(i)) continue;
            std::cout << i << " ";
            int num = i;
            bool result = true;
            while (num != 0) {
                std::cout << num << " ";
                int digit = num % 10;
                std::cout << digit << " ";
                if (i % digit != 0) result = false;
                num /= 10;
            }
            if (result == true) to_return.push_back(i);
            std::cout << " " << std::endl;
        }
        return to_return;
    }
    
    bool ContainsZero(int i) {
        while (i != 0) {
            if (i % 10 == 0) return true;
            i /= 10;
        }
        return false;
    }
};
