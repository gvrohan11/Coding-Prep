// LeetCode
// O(n) -> n is the number of words in 'text'

class Solution {
    public String[] findOcurrences(String text, String first, String second) {
        String[] arr = text.split(" ");
        if (arr.length <= 2) {
            return new String[0];
        }
        List<String> list = new ArrayList<>();
        for (int i = 0; i < arr.length - 2; i++) {
            if (arr[i].equals(first) && arr[i + 1].equals(second)) 
                list.add(arr[i + 2]);
        }
        String[] str = new String[list.size()];
        for (int i = 0; i < list.size(); i++) {
            str[i] = list.get(i);
        }
        return str;
    }
}
