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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL || head->next == NULL || m==n)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* cur = head;
        ListNode* nhead = NULL;
        ListNode* tail = NULL;
        
        while(cur!=NULL){
            if(m==1){
                nhead = prev;
                tail = cur;
                while(n>0){
                    ListNode* third = cur->next;
                    cur->next = prev;
                    prev = cur;
                    cur = third;
                    n--;
                    //reverse between m to n
                }
                break;
            }
            m--;
            n--;
            prev = cur;
            cur = cur->next;
        }
        
        //connect nodes together
        nhead->next = prev;
        tail->next = cur;
        return dummy->next;
    }
};
