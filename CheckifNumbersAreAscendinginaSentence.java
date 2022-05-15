// LeetCode
// gaps (g) - number of spaces in string 's'
// numbers (n) - amount of numbers in string 's'
// O(g + 1) + O(n) = O(g + n + 1) -> O(g + n)

class Solution {
    public boolean areNumbersAscending(String s) {
        String[] arr = s.split(" ");
        List<Integer> l = new ArrayList<>();
        for (String str : arr) {
            if (isInt(str)) l.add(Integer.parseInt(str));
        }
        for (int i = 0; i < l.size() - 1; i++) {
            if (l.get(i) >= l.get(i + 1)) return false;
        }
        return true;
    }
    
    public static boolean isInt(String str) {
        try {
            int x = Integer.parseInt(str);
            return true; //String is an Integer
        } catch (NumberFormatException e) {
            return false; //String is not an Integer
        }
    }
}
