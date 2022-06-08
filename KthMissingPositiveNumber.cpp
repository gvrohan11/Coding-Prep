// LeetCode
// O(n)

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int index = 0;
        int num = 1;
        while (missing.size() != k) {
            if (index >= arr.size() || arr[index] != num) {
            missing.push_back(num);
            } else {
                index++;
            }
            num++;
        }
        return missing[k - 1];
    }
};
