// LeetCode
// SOLUTION 1: O(n) - Smaller Time Complexity, Greater Space Complexity
// SOLUTION 2: O(n^2) - Greater Time Complexity, Smaller Space Complexity

class Solution {
public:
    // SOLUTION 1
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int, int> target_map;
        for (int i : target) {
            if (target_map.find(i) != target_map.end()) {
                target_map[i]++;
            } else {
                target_map[i] = 1;
            }
        }
        
        map<int, int> arr_map;
        for (int i : arr) {
            if (arr_map.find(i) != arr_map.end()) {
                arr_map[i]++;
            } else {
                arr_map[i] = 1;
            }
        }
        
        for (auto const& [key, value] : target_map) {
            if (value != arr_map[key]) return false;
        }
        return true;
    }
    
    /* SOLUTION 2
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> sorted1 = insertionSort(target, target.size());
        vector<int> sorted2 = insertionSort(arr, arr.size());
        for (int i = 0; i < sorted1.size(); i++) {
            if (sorted1[i] != sorted2[i]) return false;
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
    */
};
