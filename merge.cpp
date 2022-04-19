// LeetCode
// O(m + n)
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> output;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1.at(i) < nums2.at(j)) {
                output.push_back(nums1.at(i));
                i++;
            } else {
                output.push_back(nums2.at(j));
                j++;
            }
        }
        if (i == m && j < n) {
            while (j < n) {
                output.push_back(nums2.at(j));
                j++;
            }
        } else if (i < m && j == n) {
            while (i < m) {
                output.push_back(nums1.at(i));
                i++;
            }
        }
        nums1 = output;
    }
