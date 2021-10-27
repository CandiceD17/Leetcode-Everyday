Using stack:

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
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL)
            return;
        ListNode* cur = head;
        stack<ListNode*> container;
        int size = 0;
        while(cur!=NULL){
            container.push(cur);
            cur = cur->next;
            size++;
        }
        int num = 0;
        cur = head;
        while(num<size){
            ListNode* temp = cur->next;
            ListNode* tail = container.top();
            container.pop();
            cur->next = tail;
            tail->next = temp;
            cur = temp;
            num+=2;
        }
        if(size%2)
            cur->next->next = NULL;
        else
            cur->next= NULL;
        return;
    }
};
