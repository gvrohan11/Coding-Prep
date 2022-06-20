// LeetCode
// O(n)

class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if (income < brackets[0][0]) return income * ((double) brackets[0][1] / 100.0);
        double sum = brackets[0][0] * ((double) brackets[0][1] / 100.0);
        income -= brackets[0][0];
        for (int i = 1; i < brackets.size(); i++) {
            int diff = brackets[i][0] - brackets[i - 1][0];
            if (income < diff) {
                sum += income * ((double) brackets[i][1] / 100.0);
                break;
            } else {
                sum += diff * ((double) brackets[i][1] / 100.0);
                income -= diff;
            }
        }
        return sum;
    }
};
