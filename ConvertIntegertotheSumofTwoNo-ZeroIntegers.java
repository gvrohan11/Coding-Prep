// LeetCode
// O(n)

class Solution {
    public int[] getNoZeroIntegers(int n) {
        int[] to_return = new int[2];
        for (int i = 1; i < n; i++) {
            int A = i;
            int B = n - i;
            if (!containsZeros(A) && !containsZeros(B)) {
                to_return[0] = A;
                to_return[1] = B;
                break;
            }
        }
        return to_return;
    }
    
    public static boolean containsZeros(int n) {
        if (String.valueOf(n).contains("0")) return true;
        return false;
    }
}
