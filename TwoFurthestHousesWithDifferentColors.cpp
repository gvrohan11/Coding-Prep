// LeetCode
// O(n^2)

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max = 0;
        for (int i = 0; i < colors.size(); i++) {
            for (int j = i + 1; j < colors.size(); j++) {
                int dist = abs(i - j);
                if (colors.at(i) != colors.at(j) && dist > max) max = dist;
            }
        }
        return max;
    }
};
