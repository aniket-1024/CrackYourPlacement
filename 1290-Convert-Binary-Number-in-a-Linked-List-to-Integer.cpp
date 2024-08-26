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
    int getDecimalValue(ListNode* head) {
        int cnt = 0;
        ListNode* tmp = head;
        while(tmp != NULL) {
            cnt++;
            tmp = tmp->next;
        }

        int ans = 0;
        cnt--;
        while(head != NULL) {
            ans = ans + (head->val*pow(2,cnt));
            cnt--;
            head = head->next;
        }
        return ans;
    }
};