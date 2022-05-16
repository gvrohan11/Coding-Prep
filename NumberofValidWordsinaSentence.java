// LeetCode
// O(n * m): 
// n - number of words
// m - number of letters in each word (not the same for each word)

class Solution {
    public int countValidWords(String sentence) {
        String[] arr = sentence.split(" ");
        int count = 0;
        for (String s : arr) {
            s.trim();
            if (!containsDigits(s) && everythingElse(s) && s != "") count++;
        }
        return count;
    }
    
    public static boolean containsDigits(String s) {
        for (int i = 0; i < s.length(); i++) {
            int val = s.charAt(i);
            System.out.println(s.charAt(i) + " " + val);
            // 48 57
            if (val >= 48 && val <= 57) return true;
        }
        return false;
    }
    
    public static boolean everythingElse(String s) {
        int hyphenCount = 0;
        // int punctuationCount = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '!' || s.charAt(i) == '.' || s.charAt(i) == ','){
                if  (i != s.length() - 1 /* || punctuationCount > 0*/) return false;
                /*punctuationCount++;*/
            } 
            if (s.charAt(i) == '-') {
                if (hyphenCount > 0) return false;
                if (i == 0 || i == s.length() - 1) return false;
                int prev = s.charAt(i - 1);
                int next = s.charAt(i + 1);
                // 97 122
                if (prev < 97 || prev > 122 || next < 97 || next > 122) return false;
                hyphenCount++;
            }
        }
        return true;
    }
}
