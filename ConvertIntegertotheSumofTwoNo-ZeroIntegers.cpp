class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> to_return;
        for (int i = 1; i < n; i++) {
            int A = i;
            int B = n - i;
            if (!containsZeros(A) && !containsZeros(B)) {
                to_return = {A, B};
                break;
            }
        }
        return to_return;
    }
    
    bool containsZeros(int n) {
        while (n > 0) {
            if (n % 10 == 0) return true;
            n /= 10;
        }
        return false;
    }
};
