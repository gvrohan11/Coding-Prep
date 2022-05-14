// LeetCode
// O(n^2)

class Solution {
public:
    // O(2n^2) -> O(n^2)
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> to_return;
        vector<int> a;
        // O(n)
        for (int i : nums1) {
            // (O(2n) -> (O(n)))
            if (!contains(nums2, i) && !contains(a, i)) a.push_back(i);
        }
        
        vector<int> b;
        // O(n)
        for (int i : nums2) {
            // (O(2n) -> (O(n)))
            if (!contains(nums1, i) && !contains(b, i)) b.push_back(i);
        }
        to_return.push_back(a);
        to_return.push_back(b);
        return to_return;
    }
    
    // O(n)
    bool contains(std::vector<int>& vect, int i) {
        for (int index : vect) 
            if (index == i) return true;
        return false;
    }
};
