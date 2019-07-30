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
    ListNode* rotateRight(ListNode* head, int k) {
        int numNode = 0;
        ListNode* last = head;
        while(last!=NULL){
            numNode++;
            last = last->next;}
        if(numNode==0||numNode==1)
            return head;
        k = k % numNode;
        if(k!=0){
            ListNode* temp1 = head;
            ListNode* temp2 = head;
            while(k!=0){
                temp1 = temp1->next;
                k--;
            }
            while(temp1->next != NULL){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            ListNode* temp = temp2->next;
            temp2->next = NULL;
            temp1->next = head;
            head = temp;}
        return head;
    }
};
