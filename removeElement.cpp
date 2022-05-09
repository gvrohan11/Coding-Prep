// Leet Code
// O(n)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (i < nums.size()) {
            if (val == nums.at(i)) {
                nums.erase(nums.begin() + i);
            } else {
                i++;
            }
        }
        return i;
    }
};
