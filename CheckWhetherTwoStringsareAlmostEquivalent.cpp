// LeetCode
// O(n^2)

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        std::vector<char> letters;
        for (char c : word1) {
            if (!contains(letters, c)) letters.push_back(c);
        }
        for (char c : word2) {
            if (!contains(letters, c)) letters.push_back(c);
        }
        for (char c : letters) {
            // check how many times itr appears in word 1 and word 2
            std::cout << c  << std::endl;
            int word1count = numTimes(word1, c);
            int word2count = numTimes(word2, c);
            if (abs(word1count - word2count) > 3) return false;
        }
        return true;
    }
    
    bool contains(vector<char> vect, char c) {
        for (char ch : vect) 
            if (ch == c) return true;
        return false;
    }
    
    int numTimes(string word, char c) {
        int count = 0;
        for (char ch : word) {
            if (ch == c) count++;
        }
        return count;
    }
};
