// LeetCode
// O(n) -> n is the number of words in 'sentence'

class Solution {
    public int isPrefixOfWord(String sentence, String searchWord) {
        String[] arr = sentence.split(" ");
        int len = searchWord.length();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i].length() >= len && arr[i].substring(0, len).equals(searchWord))
                return i + 1;
        }
        return -1;
    }
}
