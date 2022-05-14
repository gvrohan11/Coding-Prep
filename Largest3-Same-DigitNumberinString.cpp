// LeetCode
// O(

class Solution {
public:
    string largestGoodInteger(string num) {
        int max = -1;
        for (int i = 0; i <= num.length() - 3; i++) {
            std::string extract = num.substr(i, 3);
            if (onlyOneDigit(extract)) {
                int convert = std::stoi(extract);
                if (convert > max) max = convert;
            }
        }
        if (max == -1) return "";
        if (max == 0) return "000";
        return to_string(max);
    }
    
    bool onlyOneDigit(string triple) {
        char first = triple.at(0);
        for (int i = 1; i < triple.length(); i++)
            if (triple.at(i) != first) return false;
        return true;
    }
};
