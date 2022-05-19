// LeetCode
// O(n): n is the length of the string 'path'

class Solution {
public:
    bool isPathCrossing(string path) {
        set<vector<int>> our_set;
        int x = 0;
        int y = 0;
        our_set.insert({x, y});
        for (char c : path) {
            if (c == 'N') {
                y++;
            } else if (c == 'S') {
                y--;
            } else if (c == 'E') {
                x++;
            } else if (c == 'W') {
                x--;
            }
            if (our_set.find({x, y}) != our_set.end()) return true;
            our_set.insert({x, y});
        }
        return false;
    }
};
