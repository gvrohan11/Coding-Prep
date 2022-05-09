// Leet Code
// O(n)

class Solution {
    public int lengthOfLastWord(String s) {
        String trimmed = s.trim();
        if (trimmed.length() == 0) return 0;
        int l = 0;
        for (int i = trimmed.length() - 1; i >= 0; i--) {
            char test = trimmed.charAt(i);
            if (trimmed.charAt(i) == ' ') return l;
            l++;
        }
        return l;
    }
}
