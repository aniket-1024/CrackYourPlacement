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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL ) return NULL;
        
        vector<int> v1,v2;
        while(list1 != NULL) {
            v1.push_back(list1->val);
            list1 = list1->next;
        } 
        while(list2 != NULL) {
            v2.push_back(list2->val);
            list2 = list2->next;
        }

        int l=0, r=0;
        vector<int> ans;
        while(l<v1.size() && r<v2.size()) {
            if(v1[l] < v2[r]) {
                ans.push_back(v1[l]);
                l++;
            } else if(v1[l] > v2[r]) {
                ans.push_back(v2[r]);
                r++;
            } else {
                ans.push_back(v1[l]);
                ans.push_back(v2[r]);
                l++;
                r++;
            }
        }
        while(l<v1.size()) {
            ans.push_back(v1[l]);
            l++;
        }
        while(r<v2.size()) {
            ans.push_back(v2[r]);
            r++;
        }

        ListNode* result = new ListNode();
        ListNode* finalRes = result;
        int n = ans.size();
        for(auto it:ans) {
            result->val = it;
            ListNode* tmp = new ListNode();
            if(n==1) continue;
            n--;
            result->next = tmp;
            result = result->next;
        }
        return finalRes;
    }
};