// LeetCode
// O(n)

class Solution {
public:
    string reversePrefix(string word, char ch) {
        if (word.length() <= 1 || word.find(ch) == std::string::npos) return word;
        else {
            int pos = word.find(ch);
            if (pos == 0) return word;
            if (pos == word.length() - 1) {
                return reverse(word);
            }
            std::string extract = word.substr(0, pos + 1);
            std::string rest = word.substr(pos + 1, word.length() - (pos + 1));
            return reverse(extract) + rest;
        }
    }
    
    string reverse(string word) {
        string to_return;
        for (int i = word.length() - 1; i >= 0; i--) {
            to_return.push_back(word.at(i));
            if (i == 0) break;
        }
        return to_return;
    }
};
