// LeetCode
// O(n): n is the number of pairs in 'paths'

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> inputs;
        set<string> outputs;
        for (vector<string> vect : paths) {
            if (inputs.find(vect.at(0)) == inputs.end()) inputs.insert(vect.at(0));
            if (outputs.find(vect.at(1)) == outputs.end()) outputs.insert(vect.at(1));
        }
        string to_return = "";
        for (auto itr : outputs) {
            if (inputs.find(itr) == inputs.end()) {
                to_return = itr;
                break;
            } 
        }  
        return to_return;
    }
};
