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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;
        int len = 0;
        ListNode* cur = head;
        ListNode* end = head;
        while(cur != nullptr) {
            len++;
            end = cur;
            cur = cur->next;
        }
        k %= len;
        if (k == 0) return head;
        int i = 0;
        cur = head;
        int target = len-k;
        while(cur != nullptr) {
            if (i+1 == target) {
                end->next = head;
                head = cur->next;
                cur->next = nullptr;
                break;
            }
            i++;
            cur = cur->next;
        }
        return head;
    }
};