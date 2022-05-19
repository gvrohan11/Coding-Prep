// LeetCode
// O(n^2)

class Solution {
public:
    double trimMean(vector<int>& arr) {
        vector<int> sorted = insertionSort(arr, arr.size());
        int trim = (int) round((double) arr.size() * 0.05);
        double mean;
        if (trim == 0) {
            mean = findMean(arr);
        } else {
            vector<int> sub_vec {&arr[trim], &arr[arr.size() - trim]};
            mean = findMean(sub_vec);
        }
        return mean;
    }
    
    double findMean(vector<int>& arr) {
        double sum = 0;
        for (int i : arr) {
            sum += i;
        }
        return sum / (double) arr.size();
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
