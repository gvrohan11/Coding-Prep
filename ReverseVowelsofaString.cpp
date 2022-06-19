// LeetCode
// O(n)

class Solution {
public:
    string reverseVowels(string s) {
        vector<int> positions;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                positions.push_back(i);
            }
        }
        if (positions.size() <= 1) return s;
        int left = 0;
        int right = positions.size() - 1;
        while (left < right) {
            int left_pos = positions[left];
            int right_pos = positions[right];
            char to_replace = s[left_pos];
            s[left_pos] = s[right_pos];
            s[right_pos] = to_replace;
            left++;
            right--;
        }
        return s;
    }
    
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
