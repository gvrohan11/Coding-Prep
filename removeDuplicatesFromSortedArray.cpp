// Leet Code
// O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int val = nums.at(0);
        while (i + 1 < nums.size()) {
            if (val == nums.at(i + 1)) {
                nums.erase(nums.begin() + i + 1);
            } else {
                val = nums.at(i + 1);
                i++;
            }
        }
        // int to_return = i + 1;
        // for (int i = to_return; i < nums.size(); i++) {
        //     nums.push_back(10);
        // }
        return i + 1;
    }
};
