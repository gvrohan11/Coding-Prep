// LeetCode
// O(n^2)

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if (stones.size() == 1) return stones[0];
        vector<int> sorted = insertionSort(stones, stones.size());
        // O(n^2)
        while (sorted.size() > 1) {
            int heaviest = sorted[sorted.size() - 1];
            sorted.pop_back();
            int second = sorted[sorted.size() - 1];
            sorted.pop_back();
            if (heaviest == second) continue;
            else {
                int to_insert = heaviest - second;
                sorted = insertInOrder(sorted, to_insert);
            }
        }
        if (sorted.empty()) return 0;
        return sorted[0];
    }
    
    // O(n^2)
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
    
    // O(n)
    vector<int> insertInOrder(vector<int>& nums, int element) {
        bool inserted = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= element) {
                nums.insert(nums.begin() + i, element);
                inserted = true;
                break;
            }
        }
        if (inserted == false) nums.push_back(element);
        return nums;
    }
};
