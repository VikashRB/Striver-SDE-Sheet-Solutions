/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        /*unordered_set<ListNode*> st;

        while (headA != NULL) {
            st.insert(headA);
            headA = headA->next;
        }

        while (headB != NULL) {
            if (st.find(headB) != st.end())
                return headB;
            headB = headB->next;
        }
        return NULL;*/

        ListNode* d1 = headA;
        ListNode* d2 = headB;

        while(d1 != d2) {
            d1 = d1 == NULL ? d1 = headB : d1->next;
            d2 = d2 == NULL ? d2 = headA : d2->next;
        }

        return d1;
    }
};