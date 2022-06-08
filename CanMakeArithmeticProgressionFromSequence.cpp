// LeetCode
// O(n^2)

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() == 2) return true;
        vector<int> sorted = insertionSort(arr, arr.size());
        int diff = sorted[1] - sorted[0];
        for (int i = 1; i < sorted.size() - 1; i++) {
            if (sorted[i + 1] - sorted[i] != diff) return false;
        }
        return true;
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
