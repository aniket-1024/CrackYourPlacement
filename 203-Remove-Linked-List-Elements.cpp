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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL) {
            while(prev == NULL && curr != NULL && curr->val == val) {
                head = curr->next;
                curr = head;
            }
            while(curr != NULL && curr->val == val) {
                prev->next = curr->next;
                curr = curr->next;
            }
            if(curr != NULL) {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};