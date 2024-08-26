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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        set<int> st;
        while(head!=NULL) {
            st.insert(head->val);
            head = head->next;
        }

        ListNode* ans = new ListNode();
        ListNode* finalans = ans;
        int n = st.size();
        for(auto it:st) {
            ans->val = it;
            ListNode* tmp = new ListNode();
            if(n==1) continue;
            n--;
            ans->next = tmp;
            ans = ans->next;
        }
        return finalans;
    }
};