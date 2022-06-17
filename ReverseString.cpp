// LeetCode
// O(n/2)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            char left_one = s[left];
            s[left] = s[right];
            s[right] = left_one;
            left++;
            right--;
        }
    }
};
