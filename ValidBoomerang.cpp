// LeetCode
// O(1)

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        if (!areDistinct(points) || notDiagonal(points)) return false;
        double dy1 = points[0][1] - points[1][1]; // 1 - 2 = -1
        double dx1 = points[0][0] - points[1][0]; // 1 - 2 = -1
        
        double dy2 = points[1][1] - points[2][1]; // 2 - 3 = -1
        double dx2 = points[1][0] - points[2][0]; // 2 - 3 = -1
        
        return (dy1 / dx1) != (dy2 / dx2);
    }
    
    bool areDistinct(vector<vector<int>>& points) {
        if (points[0][0] == points[1][0] && points[0][1] == points[1][1]) return false;
        if (points[1][0] == points[2][0] && points[1][1] == points[2][1]) return false;
        if (points[0][0] == points[2][0] && points[0][1] == points[2][1]) return false;
        return true;
    }
    
    bool notDiagonal(vector<vector<int>>& points) {
        if (points[0][0] == points[1][0] && points[1][0] == points[2][0]) return true;
        if (points[0][1] == points[1][1] && points[1][1] == points[2][1]) return true;
        return false;
    }
};
