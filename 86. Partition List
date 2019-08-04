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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* cur = head;
        ListNode* dummy2 = new ListNode(0);
        ListNode* cur2=dummy2;
        while(cur!=NULL){
            if(cur->val>=x){
                cur2->next = new ListNode(cur->val);
                cur2 = cur2->next;
                prev->next = cur->next;
                delete cur;
                cur = prev->next;
            }
            else{
                prev = prev->next;
                cur = cur->next;
            }
        }
        prev->next = dummy2->next;
        return dummy->next;
    }
};
