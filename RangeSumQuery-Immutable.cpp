// LeetCode
// NumArray -> O(1)
// sumRange -> O(n)

class NumArray {
public:
    NumArray(vector<int>& nums):nums_(nums) {}
    
    int sumRange(int left, int right) {
        if (left == right) return nums_[left];
        int count = 0;
        for (int i = left; i <= right; i++) count += nums_[i];
        return count;
    }
    
private:
    vector<int>& nums_;
};
