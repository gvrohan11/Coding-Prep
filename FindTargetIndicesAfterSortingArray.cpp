// LeetCode
// O(n^2)

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int size = (int) nums.size();
        vector<int> new_vect = insertionSort(nums, size);
        vector<int> to_return;
        for (int i = 0; i < size; i++) {
            if (nums.at(i) == target) to_return.push_back(i);
        }
        return to_return;
    }
    vector<int> insertionSort(vector<int>& nums, int size) {
        if (nums.size() <= 1) {
          return nums;
        }
        int tmp;
        for (int i = 1; i < size; i++) {
          for (int j = i; j > 0; j--) {
            if (nums[j - 1] > nums[j]) {
              tmp = nums[j - 1];
              nums[j - 1] = nums[j];
              nums[j] = tmp;
            } else {
              break;
            }
          }
        }
        return nums;
      }
};
