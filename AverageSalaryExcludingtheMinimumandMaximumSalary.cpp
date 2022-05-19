// LeetCode
// O(n)

class Solution {
public:
    double average(vector<int>& salary) {
        int min = salary.at(0);
        int max = salary.at(0);
        for (int i : salary) {
            if (i > max) max = i;
            else if (i < min) min = i;
        }
        double sum = 0;
        for (int i : salary) {
            if (i != min && i != max) {
                sum += i;
            }
        }
        return sum / (salary.size() - 2);
    }
};
