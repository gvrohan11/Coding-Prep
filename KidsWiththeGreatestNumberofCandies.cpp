// LeetCode
// O(n^2)

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> to_return;
        for (int i = 0; i < candies.size(); i++) {
            to_return.push_back(result(candies, extraCandies, i));
        }
        return to_return;
    }
    
    bool result(vector<int>& something, int extraCandies, int i) {
        vector<int> candies = something;
        candies.at(i) += extraCandies;
        int max = candies.at(i);
        for (int amount : candies) {
            if (amount > max) return false;
        }
        return true;
    }
};
