// O(n) - n is the length of the string / # char’s in string
int firstUniqChar(string s) {
        std::map<char, int> map;
        std::set<char> set;
        for (char c : s) {
            if (set.find(c) == set.end()) {
                set.insert(c);
                map.insert(std::pair<char, int>(c, 0));
            } else {
                map.at(c)++;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (map.at(s.at(i)) == 0)
                return i;
        }
        return -1;
    }
