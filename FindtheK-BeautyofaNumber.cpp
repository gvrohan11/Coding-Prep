// LeetCode 
// O(n)

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        std::string num_string = std::to_string(num);
        // num_string.substr(i, k)
        int count = 0;
        for (int i = 0; i <= num_string.length() - k; i++) {
            std::string extract = num_string.substr(i, k);
            int convert = std::stoi(extract);
            // std::cout << num << std::endl;
            // std::cout << convert << std::endl;
            if (convert == 0) continue;
            if (num % convert == 0) count++;
            //std::stoi()
        }
        return count;
    }
};
