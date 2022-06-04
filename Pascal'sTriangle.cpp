// LeetCode
// O(numRows * num elements in each row after 2)

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) return {{1}};
        if (numRows == 2) return {{1}, {1, 1}};
        vector<vector<int>> to_return = {{1}, {1, 1}};
        for (int i = 2; i < numRows; i++) {
            vector<int> prev = to_return.at(i - 1);
            vector<int> add = {1};
            for (int j = 1; j < prev.size(); j++) {
                add.push_back(prev.at(j - 1) + prev.at(j));
            }
            add.push_back(1);
            to_return.push_back(add);
        }
        return to_return;
    }
};
