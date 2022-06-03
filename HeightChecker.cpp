// LeetCode
// O(n^2)

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> original = heights;
        vector<int> sorted = insertionSort(heights, heights.size());
        int counter = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (sorted.at(i) != original.at(i)) counter++;
        }
        return counter;
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
