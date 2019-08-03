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
    void remove(ListNode* head, int n){
        //delete head->next till n
        ListNode* temp = head;
        while(n>0){
            ListNode* killme = temp->next;
            temp->next = killme->next;
            delete killme;
            n--;
        }
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL ||head->next==NULL)
            return head;
        int num = head->val;
        int repeat = 1;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = head->next;
        ListNode* prev = dummy;
        while(cur!=NULL){
            if(cur->val==num){
                repeat++;
                cur = cur->next;
            }
            else if(repeat>1){
                num = cur->val;
                cur = cur->next;
                remove(prev, repeat);
                repeat = 1;
            }
            else{
                num = cur->val;
                cur=cur->next;
                prev = prev->next;
            }
        }
        if(repeat>1)
            remove(prev, repeat);
        return dummy->next;
    }
};

2019.08.03
