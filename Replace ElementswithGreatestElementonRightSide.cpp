// LeetCode
// O(n^2)

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        if (size == 1) return {-1};
        if (size == 2) return {arr.at(1), -1};
        for (int i = 0; i < size; i++) {
            if (i == size - 2) arr.at(i) = arr.at(i + 1);
            else if (i == size - 1) arr.at(i) = -1;
            else {
                vector<int> sub_vec {&arr[i + 1], &arr[size]};
                // Print(sub_vec);
                arr.at(i) = Greatest(sub_vec);
            }
        }
        return arr;
    }
    
    int Greatest(vector<int>& arr) {
        int max = arr.at(0);
        for (int i : arr)
            if (i > max) max = i;
        return max;
    }
    
    // void Print(vector<int>& arr) {
    //     for (int i : arr) {
    //         std::cout << i << " ";
    //     }
    //     std::cout << " " << std::endl;
    // }
};
