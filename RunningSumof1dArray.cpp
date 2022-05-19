class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> use_this = nums;
        for (int i = 0; i < nums.size(); i++) {
            int amount = 0;
            for (int j = i; j >= 0; j--) {
                amount += nums.at(j);
            }
            use_this.at(i) = amount;
        }
        return use_this;
    }
};
