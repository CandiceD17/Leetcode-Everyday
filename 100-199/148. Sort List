Using recursion:
slow and fast pointers to find midpoint
then insert elements to result one by one

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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow->next;
        slow->next = NULL;
        ListNode* l = sortList(head);
        ListNode* r = sortList(temp);
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        while(l!=NULL && r!=NULL){
            if(l->val<r->val){
                cur->next = l;
                l = l->next;
            }
            else{
                cur->next = r;
                r = r->next;
            }
            cur = cur->next;
        }
        if(l!=NULL)
            cur->next = l;
        if(r!=NULL)
            cur->next = r;
        return dummy->next;
    }
};

2019.08.19
