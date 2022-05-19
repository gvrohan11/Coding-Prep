// LeetCode
// O(n^2)

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j && arr.at(i) == 2 * arr.at(j)) return true;
            }
        }
        return false;
    }
};
