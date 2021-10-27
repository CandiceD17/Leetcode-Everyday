Inverse the last part then compare

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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        ListNode* cur = slow;
        while(cur!=NULL){
            ListNode* third = cur->next;
            cur->next = prev;
            prev = cur;
            cur = third;
        }
        while(prev&&head){
            if(prev->val!=head->val)
                return false;
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};
