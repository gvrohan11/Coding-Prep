// LeetCode
// O(n)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return false;
        if (head->next == nullptr) return true;
        string s;
        for (ListNode* curr = head; curr != nullptr; curr = curr->next) {
            s += to_string(curr->val);
        }
        
        string reverse;
        for (int i = s.length() - 1; i >= 0; i--) {
            reverse.push_back(s.at(i));
            if (i == 0) break;
        }
        
        return s == reverse;
    }
};
