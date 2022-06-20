// LeetCode
// O(n)

class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.length();
        if (len < 8) return false;
        bool lowercase = false;
        bool uppercase = false;
        bool digit = false;
        bool special = false;
        for (int i = 0; i < len; i++) {
            if (i != len - 1 && password[i] == password[i + 1]) return false;
            int ascii = (int) password[i];
            if (ascii >= 97 && ascii <= 122) lowercase = true;
            else if (ascii >= 65 && ascii <= 90) uppercase = true;
            else if (ascii >= 48 && ascii <= 57) digit = true;
            else if (isSpecial(password[i])) special = true;
        }
        return lowercase && uppercase && digit & special;
    }
    
    bool isSpecial(char c) {
        return c == '!' || c == '@' || c == '#' || c == '$' 
            || c == '%' || c == '^' || c == '&' || c == '*'
            || c == '(' || c == ')' || c == '-' || c == '+';
    }
};
