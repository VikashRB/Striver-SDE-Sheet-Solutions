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
        // ListNode* temp1 = list1;
        // ListNode* temp2 = list2;
        // vector<int> ans;

        // while(temp1) {
        //     ans.push_back(temp1->val);
        //     temp1 = temp1->next;
        // }
        // while(temp2) {
        //     ans.push_back(temp2->val);
        //     temp2 = temp2->next;
        // }

        // sort(ans.begin(), ans.end());
        // ListNode dummy; //object
        // ListNode* curr = &dummy; //pointer to object;

        // for(auto num : ans) {
        //     curr->next = new ListNode(num);
        //     curr = curr->next;
        // }

        // return dummy.next;
        if(!list1) return list2;
        if(!list2) return list1;
        if(!list1 && !list2) return NULL;

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* t1 = list1;
        ListNode* t2 = list2;

        while(t1 && t2) {
            if(t1->val < t2->val) {
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            } else {
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }

        if(t1) {
            temp->next = t1;
        } else {
            temp->next = t2;
        }

        return dummy->next;
    }
};