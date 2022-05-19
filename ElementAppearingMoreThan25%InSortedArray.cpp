// LeetCode
// O(n)

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int length = arr.size();
        map<int, int> our_map;
        for (int i : arr) {
            if (our_map.find(i) != our_map.end())
                our_map[i]++;
            else
                our_map[i] = 1;
        }
        int val = arr.at(0);
        double percent_amount = (double) length / 4.0;
        for (auto const& [key, value] : our_map) {
            if ((double) value > percent_amount)
                val = key;
        }
        return val;
    }
};
