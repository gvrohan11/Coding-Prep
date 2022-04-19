// LeetCode
// O(n*m)
// n - length of strs.at(0)
// m - length of strs
string longestCommonPrefix(vector<string>& strs) {
        std::string to_return;
        int pos = 0;
        for (char c : strs.at(0)) {
            int checker = 0;
            for (std::string s : strs) {
                if (pos == s.length()) {
                    return to_return;
                }
                if (s.at(pos) != c) {
                    checker--;
                }
            }
            if (checker == 0) {
                to_return.push_back(c);
                pos++;
            } else {
                return to_return;
            }
        }
        return to_return;
    }
