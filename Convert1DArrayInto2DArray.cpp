// LeetCode
// O(vector size)

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return std::vector<std::vector<int>>();
        vector<vector<int>> to_return;
        for (int i = 0; i < original.size(); i = i + n) {
            vector<int> to_add;
            for (int j = i; j < n + i; j++)
                to_add.push_back(original.at(j));
            to_return.push_back(to_add);
        }
        return to_return;
    }
};
