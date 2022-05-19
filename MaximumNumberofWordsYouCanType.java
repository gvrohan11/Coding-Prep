// LeetCode
// O(n * m): n is the number of words in 'text'; m is the number of letters in 'brokenLetters'

class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        String[] arr = text.split(" ");
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            int result = -1;
            for (int j = 0; j < brokenLetters.length(); j++) {
                if (arr[i].indexOf(String.valueOf(brokenLetters.charAt(j))) != -1)
                    result++;
            }
            if (result == -1) count++;
        }
        return count;
    }
}
