// LeetCode
// O(n + m): n is the length of ops and m is the length of the arraylist we create

class Solution {
    public int calPoints(String[] ops) {
        List<Integer> scores = new ArrayList<>();
        for (String s : ops) {
            if (isInteger(s)) {
                scores.add(Integer.parseInt(s));
            } else if (s.equals("C")) {
                scores.remove(scores.size() - 1);
            } else if (s.equals("D")) {
                scores.add(scores.get(scores.size() - 1) * 2);
            } else if (s.equals("+")) {
                scores.add(scores.get(scores.size() - 1) + scores.get(scores.size() - 2));
            }
        }
        int total = 0;
        for (int i : scores) total += i;
        return total;
    }
    
    public static boolean isInteger(String str) { 
      try {  
        Integer.parseInt(str);  
        return true;
      } catch(NumberFormatException e){  
        return false;  
      }  
    }
}
