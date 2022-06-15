// LeetCode
// O(n^2)

class Solution {
public:
    int countTriples(int n) {
        vector<int> squares;
        for (int i = 1; i <= n; i++) squares.push_back(i * i);
        int count = 0;
        for (int i = 0; i < squares.size(); i++) {
            for (int j = i + 1; j < squares.size(); j++) {
                if (floor(sqrt(squares[i] + squares[j])) == ceil(sqrt(squares[i] + squares[j]))) {
                    if ((int) sqrt(squares[i] + squares[j]) <= n) count += 2;
                    else break;
                }
            }
        }
        return count;
    }
};
