Using two pointer to proceed together:

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        while(n!=0){
            temp1 = temp1->next;
            n--;
        }
        if(temp1==NULL){
            ListNode* killme = head;
            head = head->next;
            delete killme;
            return head;
        }
        ListNode* temp2 = head;
        while(temp1->next!=NULL){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        ListNode* killme = temp2->next;
        temp2->next = killme->next;
        delete killme;
        return head;
    }
};

2019.07.23
