// LeetCode
// O(n)

class Solution {
public:
    int maxPower(string s) {
        if (s.length() == 1) return 1;
        int final_count = 1;
        int current_count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) current_count++;
            else {
                if (current_count > final_count) final_count = current_count;
                current_count = 1;
            }
        }
        if (current_count > final_count) final_count = current_count;
        return final_count;
    }
};
