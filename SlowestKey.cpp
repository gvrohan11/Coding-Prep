// LeetCode
// O(n)

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        int index = 1;
        char to_return = keysPressed[0];
        for (int i = 1; i < releaseTimes.size(); i++) {
            int time = releaseTimes[i] - releaseTimes[i - 1];
            if (time > max) {
                max = time;
                index = i;
                to_return = keysPressed[i];
            } else if (time == max && (int) keysPressed[i] > (int) to_return) {
                index = i;
                to_return = keysPressed[i];
            }
        }
        return to_return;
    }
};
